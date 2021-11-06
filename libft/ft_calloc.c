/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:55:46 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 15:55:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  index;
    char    *str;

    index = 0;
    str = (char *)s;
    while (index < n)
    {
        str[index] = 0;
        index++;
    }
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *) malloc(count * size);
    ft_bzero(ptr, size);
    return (ptr);
}

