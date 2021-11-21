/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:33:37 by matef             #+#    #+#             */
/*   Updated: 2021/11/21 00:48:51 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (dstsize == 0)
		return (len);
	index = 0;
	while (src[index] && index < (dstsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}
