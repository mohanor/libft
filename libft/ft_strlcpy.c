/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:37 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 12:33:40 by matef            ###   ########.fr       */
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

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  index;

    index = 0;
    while (src[index] && index < dstsize - 1)
    {
        dst[index] = src[index];
        index++;
    }

    dst[index] = '\0';
    return (ft_strlen(src));
}