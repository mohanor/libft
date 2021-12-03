/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:18:32 by matef             #+#    #+#             */
/*   Updated: 2021/11/21 00:44:51 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_addtostr(char *str, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	index;
	size_t	last_index;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (0);
	index = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	ft_addtostr(str, s1);
	last_index = ft_strlen(s1);
	index = 0;
	while (s2[index])
	{
		str[last_index + index] = s2[index];
		index++;
	}
	str[last_index + index] = '\0';
	return (str);
}
