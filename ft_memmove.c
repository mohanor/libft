/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:39:47 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 11:39:48 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d;
    char    *s;
    
    s = (char *)src;
    d = (char *)dst;
    if ((d == NULL) &&(s == NULL))
        return 0;

    if (s > d)
        return (ft_memcpy(d, s, len));
    
    while (len)
    {
        d[len - 1] = s[len - 1];
        len--;
    }
    
    return (void *)d;
}