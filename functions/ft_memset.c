/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:30:55 by matef             #+#    #+#             */
/*   Updated: 2021/11/20 22:08:40 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	index;

	index = 0;
	str = (char *)b;
	while (index < len)
	{
		str[index] = (char)c;
		index++;
	}
	return ((void *)str);
}
