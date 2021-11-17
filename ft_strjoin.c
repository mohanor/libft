/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:18:32 by matef             #+#    #+#             */
/*   Updated: 2021/11/06 11:18:37 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len;
    size_t  index;
    size_t  last_index;
    char    *str;

    index = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(len);
    if (str == NULL)
        return (0);
    
    while (s1[index])
    {
        str[index] = s1[index];
        index++;
    }
    
    last_index = index;
    index = 0;
    while (s2[index])
    {
        str[last_index + index] = s2[index];
        index++;
    }
    return (str);
}