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

#include <stdlib.h>

void ft_putnbr(unsigned int nbr, char *tab, int *index)
{
   if ( nbr < 10)
   {
        tab[*index] = nbr + 48;
        (*index)++;
        return ;
   }

   ft_putnbr(nbr / 10, tab, index);
   ft_putnbr(nbr % 10, tab, index);
   tab[*index] = '\0';
}

char *ft_itoa(int n)
{
    unsigned int    nbr;
    int             index;
    char            *tab;

    tab = (char *)malloc(12);
    index = 0;
    if (0 <= n && n <= 9)
    {
        tab[index++] = n + 48;
        tab[index] = '\0';
        return (tab);
    }

    if (n < 0)
    {
        nbr = -n;
        tab[index] = '-';
        index++;
    }
    else
        nbr = n;
    
    ft_putnbr(nbr, tab, &index);
    return tab;
}