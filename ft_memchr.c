/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:32:40 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 14:32:42 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  index;
    char    *str;

    str = (char *)s;
    index = 0;
    while (index < n)
    {
        if (str[index] == c)
            return ((void *)&str[index]);
        index++;
    }

    return (0);
}