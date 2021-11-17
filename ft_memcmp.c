/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:38:57 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 14:38:59 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *s;
    unsigned char   *d;
    size_t          index;
    
    s = (unsigned char *)s1;
    d = (unsigned char *)s2;
    index = 0;
    while (index < n)
    {
         if (s[index] != d[index])
            return (s[index] - d[index]);
        index++;
    }

    return (0);
}