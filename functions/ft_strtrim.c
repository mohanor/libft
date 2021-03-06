/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:49:29 by matef             #+#    #+#             */
/*   Updated: 2021/11/21 12:07:39 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_start(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	index;

	len = ft_strlen(s1);
	index = 0;
	while (index < len)
	{
		if (ft_strchr(set, s1[index]) == NULL)
			break ;
		index++;
	}
	return (index);
}

static unsigned int	ft_end(char const *s1, char const *set)
{
	unsigned int	len;

	len = ft_strlen(s1) - 1;
	while (0 <= len)
	{
		if (ft_strchr(set, s1[len]) == NULL)
			break ;
		len--;
	}
	return (len);
}

static char	*ft_blank(void)
{
	char	*ret;

	ret = malloc(1);
	if (!ret)
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start_index;
	unsigned int	end_index;
	unsigned int	index;
	char			*ptr;

	if (!s1 || !set)
		return (0);
	if (!*set)
		return (ft_strdup(s1));
	index = 0;
	start_index = ft_start(s1, set);
	if (start_index == ft_strlen(s1))
		return (ft_blank());
	end_index = ft_end(s1, set);
	ptr = (char *)malloc(end_index - start_index + 2);
	if (!ptr)
		return (0);
	while (start_index <= end_index)
	{
		ptr[index] = s1[start_index];
		start_index++;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
