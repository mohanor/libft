/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:49:38 by matef             #+#    #+#             */
/*   Updated: 2021/11/06 14:49:43 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_rows(char const *s, char c)
{
    int i;
    int rows;
    
    i = 0;
    rows = 0;
    while(*s && *s == c)
        s++;

    while (s[i])
    {
        if(s[i] == c && (s[i + 1] != c || s[i + 1] == '\0'))
            rows++;
        i++;
    }
    return rows;
}

char *ft_skipechar(char const *s, char c)
{
    while(*s && *s == c)
        s++;
    return (char *)s;
}

int ft_len_of_row(char const *s, char c)
{
    int i;
    char *st;
    
    i = 0;
    while (s[i] && s[i] != c)
    {
        i++;
    }
    return i;
}

char    **ft_split(char const *s, char c)
{   
    char **ptr;
    char    *str;
    int     j;
    int len;
    int k;
    
    j = 0;
    k = 0;
    len = 0;

if (!s) return 0;
    ptr = (char **)malloc((ft_rows(s , c) + 1) * sizeof(char *));
    if (!ptr) return 0;
    
    str = ft_skipechar(s, c);
    while (*str)
    {
        len = ft_len_of_row(str,c);
        ptr[j] = (char *)malloc((len + 1) * sizeof(char));
        if (!ptr[j])
        {
            free(ptr);
            return 0;
        }

        while (k < len)
        {
            ptr[j][k] = str[k];
            k++;
        }

        ptr[j][k] = '\0';
        str = ft_skipechar(str + len, c);

        j++;
        k = 0;
    }

    ptr[j] = 0;
    return ptr;
}
