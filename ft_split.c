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

int ft_row(char const *s, char c)
{
    int index;
    int rows;
     
    rows = 0;
    index = 0;
    while (s[index])
    {
        if (s[index] == c)
        {
            if (s[index - 1] != c && index != 0)
            {
                rows++;
            }
        }
        index++;
    }
    
    if (s[index - 1] != c)
      rows++;
    return rows;
}

char    **ft_emptytab(char const *s, char c)
{
    int rows;
    int index;
    int i;
    char **ptr;
    
    index = 0;
    rows = ft_row(s, c);
    ptr = (char **)malloc(rows * sizeof(char **));
    if (ptr == NULL)
        return 0;
    rows = 0;
    i = 0;
    while (s[index])
    {
        if (s[index] == c)
        {
            if (s[index - 1] != c && index != 0)
            {
                ptr[rows] = (char *)malloc(i + 1);
                if(ptr[rows] == NULL) return 0;
                i = 0;
                rows++;
            }
        }
        else
        {
            i++;
        }
        index++;
    }
    
    if (s[index - 1] != c)
    {
      ptr[rows] = (char *)malloc(i + 1);
    }
    return ptr;
}

char    **ft_split(char const *s, char c)
{
    char **split_str;
    int index = 0;
    int rows;
    int i;
    
    if (s == NULL) return 0;
    i = 0;
    rows = 0;
    split_str = ft_emptytab(s, c);
    
    while (s[index])
    {
        if (s[index] == c)
        {
            if (s[index - 1] != c && index != 0)
            {
                split_str[rows][i] = '\0';
                i = 0;
                rows++;
            }
        }
        else
        {
            split_str[rows][i] = s[index];
            i++;
        }
        index++;
    }
    
    if (s[index - 1] != c)
    {
      split_str[rows][i] = '\0';
    }
    
    return split_str;
}


