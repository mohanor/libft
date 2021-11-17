/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:07:19 by matef             #+#    #+#             */
/*   Updated: 2021/11/08 13:26:26 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
    size_t      i;
    int         one;
    long int    nbr;

    i = 0;
    nbr = 0;
    one = 1;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            one = -1;
        i++;
    }

    while (str[i] && ft_isdigit(str[i]))
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }

    return (nbr * one);
}
