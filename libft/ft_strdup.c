/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 08:52:25 by matef             #+#    #+#             */
/*   Updated: 2021/11/06 08:52:27 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

char    *ft_strdup(const char *s1)
{
    size_t  len;
    char    *str;
    int     i;

    i = 0;
    len = ft_strlen(s1);
    str = (char *)malloc(len);
    if (str == NULL)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }

    return (str);
}
