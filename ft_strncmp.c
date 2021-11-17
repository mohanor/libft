/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:16:45 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 13:16:46 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *s;
    unsigned char   *d;
    size_t          index;

    index = 0;
    s = (unsigned char *)s1;
    d = (unsigned char *)s2;
    while (s[index] && d[index] && index < n - 1)
    {
        if (s[index] != d[index])
            return (s[index] - d[index]);
        index++;
    }

    return (s[index] - d[index]);
}