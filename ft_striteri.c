/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:29:39 by matef             #+#    #+#             */
/*   Updated: 2021/11/08 10:29:50 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int    index;

    if (s == NULL) return;
    index = 0;
    while (s[index])
    {
        f(index, &s[index]);
        index++;
    }
}