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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int index;

    index = 0;
    while (s[index])
    {
        if (s[index] == c)
            return ((char *)&s[index]);
        index++;
    }

    return (NULL);
}

unsigned int ft_start(char const *s1, char const *set)
{
    unsigned int    len;
    unsigned int    index;
    
    len = strlen(s1);
    index = 0;
    while (index < len)
    {
        if (strchr(set, s1[index]) == NULL)
            break;
        index++;
    }
    printf("start = %d \n", index);
    return (index);
}

unsigned int ft_end(char const *s1, char const *set)
{
    unsigned int    len;
    
    len = strlen(s1) - 1;
    while (0 <= len)
    {
        if (strchr(set, s1[len]) == NULL)
            break;
        len--;
    }

    printf("end = %d \n", len);

    return (len);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int     start_index;
    unsigned int     end_index;
    unsigned int     index;
    char    *ptr;

    if (s1 == NULL)
        return (NULL);

    if (set == NULL)
        return (strdup(s1));
    
    index = 0;
    start_index = ft_start(s1, set);
    end_index = ft_end(s1, set);
    
    ptr = (char *)malloc(end_index - start_index + 2);
    
    while (start_index <= end_index)
    {
        ptr[index] = s1[start_index];
        start_index++;
        index++;
    }
    ptr[index] = '\0';
    return (ptr);
}

int main()
{
   char str[] = "lHHekjHeklllworldH1He5jhgjkl\t";
   char *cpy;
   
   cpy = ft_strtrim(str, "Hl");
   
   printf("%s \n", cpy);
    
  return 0;
}
