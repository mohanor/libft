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

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    index;
    char *str;

    index = 0;
    str = (char *)malloc(len);
    if (str == NULL)
        return (NULL);
    
    while (len)
    {
        str[index++] = s[start++];
        len--;
    }
    return (str);
}