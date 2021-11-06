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


#include <stdlib.h>

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
                printf("\n");
            }
        }
        index++;
    }
    return rows;
}

char    **ft_split(char const *s, char c)
{
    int rows;
    int index;
    int i;
    char **ptr;
    
    index = 0;
    rows = ft_row(s, c);
    ptr = (char **)malloc(rows * sizeof(char *));
    rows = 0;
    i = 0;
    while (s[index])
    {
        if (s[index] == c) {
            if (s[index - 1] != c && index != 0)
            {
                ptr[rows] = (char *)malloc(i);
                i = 0;
                rows++;
                printf("\n");
            }
        }else {

            i++;
        }
        index++;
    }
    
    return ptr;
}

int main()
{
  ft_split("HHHHHHHHhekjHeklllo HHHHHHHHHworldH1He587He12HjgjhgjklH",'H');
  return 0;
}
