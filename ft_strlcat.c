/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:54:15 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 12:54:17 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  len_dst;
    size_t  len_src;
    size_t  index;

    index = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize == 0)
        return len_src;

    while (src[index] && ( len_dst + index < dstsize - 1))
    {
        dst[len_dst + index] = src[index];
        index++;
    }

    dst[len_dst + index] = '\0';

    if (dstsize > len_dst)
        return (len_dst + len_src);
    
    return (len_src + dstsize);
}