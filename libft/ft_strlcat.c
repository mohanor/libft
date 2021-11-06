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

size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  len;
    size_t  index;

    index = 0;
    len = ft_strlen(dst);
    while (index < dstsize)
    {
        dst[len + index] = src[index];
        index++;
    }

    dst[len + index] = '\0';
    return (ft_strlen(src));
}