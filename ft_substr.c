/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:52:24 by matef             #+#    #+#             */
/*   Updated: 2021/11/20 22:29:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		index;
	char	*str;

	index = 0;
	if (!s)
		return (0);
	if (ft_strlen(s + start) < len)
		str = (char *)malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (index < (int)len && s[start + index] && !(start >= ft_strlen(s)))
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
