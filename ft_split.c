/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:49:38 by matef             #+#    #+#             */
/*   Updated: 2021/11/21 12:28:00 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int	i;
	int	rows;

	i = 0;
	rows = 0;
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c || s[i + 1] == '\0'))
			rows++;
		i++;
	}
	return (rows);
}

static char	*ft_skipechar(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static int	ft_len_of_row(char const *s, char c)
{
	int		i;
	char	*st;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**ft_getstrsplit(char *str, char **ptr, char c)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (*str)
	{
		ptr[j] = (char *)malloc((ft_len_of_row(str, c) + 1) * sizeof(char));
		if (!ptr[j])
		{
			free(ptr);
			return (0);
		}
		while (k < ft_len_of_row(str, c))
		{
			ptr[j][k] = str[k];
			k++;
		}
		ptr[j][k] = '\0';
		str = ft_skipechar(str + ft_len_of_row(str, c), c);
		j++;
		k = 0;
	}
	ptr[j] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;

	if (!s)
		return (0);
	ptr = (char **)malloc((ft_rows(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	str = ft_skipechar(s, c);
	return (ft_getstrsplit(str, ptr, c));
}
