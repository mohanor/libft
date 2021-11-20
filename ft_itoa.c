/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:51:26 by matef             #+#    #+#             */
/*   Updated: 2021/11/07 12:51:29 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(long int nbr, char *tab, int *index)
{
   if ( nbr < 10)
   {
        tab[*index] = nbr + 48;
        (*index)++;
        return ;
   }

   ft_putnbr(nbr / 10, tab, index);
   ft_putnbr(nbr % 10, tab, index);
}

int ft_nbr_digit(long int n)
{
    int i = 1;
    if (n < 0) n = n * -1;
    while (n > 9)
    {
        n = n / 10;
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    int         count;
    int         index;
    long int    nbr;
    char        *tab;

    nbr = n;
    count = ft_nbr_digit(nbr);
    if (nbr < 0)
        count += 1;
    tab = (char *)malloc(count + 1);
    if (tab == NULL)
        return 0;
    index = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        tab[index] = '-';
        index++;
    }
    ft_putnbr(nbr, tab, &index);
    tab[index] = '\0';
    return tab;
}