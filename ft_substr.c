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
	char	*p;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		p = (char *)malloc(sizeof(*s) * (ft_strlen(s) - start + 1));
	else
		p = (char *)malloc(sizeof(*s) * (len + 1));
	if (!p)
		return (0);
	while (s[start] && len--)
	{	
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
