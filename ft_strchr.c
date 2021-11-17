/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:06:13 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 13:06:15 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

    if (s[index] == '\0' && c == '\0')
            return ((char *)&s[index]);
    return (0);
}