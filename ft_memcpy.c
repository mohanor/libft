/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:58:26 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 10:02:38 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  index;
    char    *d;
    const char    *s;

    index = 0;
    d = (char *)dst;
    s = (const char *)src;
    if ((d == NULL) &&(s == NULL))
        return 0;
    while (index < n)
    {
        d[index] = s[index];
        index++;
    }
    return ((void *)d);
}