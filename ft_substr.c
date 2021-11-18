/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:52:24 by matef             #+#    #+#             */
/*   Updated: 2021/11/06 10:52:26 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    index;
    char *str;

    if (s == NULL) return 0;
    index = 0;
    if (start >= ft_strlen(s))
    {
        str = (char *)malloc(1);
        if (str == NULL)
            return (0);
        str[0] = '\0';
        return str;
    }


    str = (char *)malloc(len + 1);
    if (str == NULL)
        return (0);
        
    while (len)
    {
        str[index++] = s[start++];
        len--;
    }

    str[index] = '\0';
    return ((char *)str);
}