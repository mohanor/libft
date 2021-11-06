/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:49:29 by matef             #+#    #+#             */
/*   Updated: 2021/11/06 11:49:31 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int  ft_strlen(const char *s)
{
    unsigned int  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

unsigned int  ft_skipstr(char const *s1, char const *set)
{
    unsigned int  index;
    unsigned int  j;
    unsigned int  k;

    index = 0;
    j = 0;
    while(s1[index] && s1[index] == set[j])
    {
        index++;
        j++;
        if (set[j] == '\0')
        {
            j = 0;
            k = index;
        }
    }


    return (k + 1);
}

unsigned int  ft_skipstrfromlast(char const *s1, char const *set)
{
    unsigned int  index;
    unsigned int  len_s1;
    unsigned int  len_set;
    unsigned int  save_len_set;
    unsigned int  j;
    unsigned int  k;

    len_s1 = ft_strlen(s1) - 1;
    len_set = ft_strlen(set) - 1;
    save_len_set = len_set;
    j = 0;
    while(len_s1 && s1[len_s1] == set[len_set])
    {
        len_set--;
        if (len_set == -1)
        {
            len_set = save_len_set;
            k = len_s1;
        }
        
        len_s1--;
    }
    return (k - 1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    first_s1;
    unsigned int    last_s1;
    unsigned int    index;
    char            *ptr;

    index = 0;
    first_s1 = ft_skipstr(s1, set);
    last_s1 = ft_skipstrfromlast(s1, set);
    ptr = (char *)malloc(last_s1 - first_s1 + 2);
    while (first_s1 <= last_s1)
    {
        ptr[index] = s1[first_s1];
        first_s1++;
        index++;
    }
    ptr[index] = '\0';
    return (ptr);
}

int main() {
    // Write C code here
    char str[] = "HeHeklllo world1HeHe";
    char *st;

    st = ft_strtrim(str, "He");
    
    printf("%s", st);
    
    
    return 0;
}