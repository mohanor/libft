/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:48:55 by matef             #+#    #+#             */
/*   Updated: 2021/11/08 12:52:03 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero (void *s, size_t n)
{
	size_t	index;
	char	*str;

	index = 0;
	str = (char *)s;
	while (index < n)
	{
		str[index] = 0;
		index++;
	}
}