/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:43:46 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 14:43:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    
    if (ft_strlen(needle) == 0 || haystack == needle)
        return (char *)haystack;

    if(ft_strlen(needle) > ft_strlen(haystack))
        return 0;

    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] && ( haystack[i + j] == needle[j] ) && (i + j < len))
        {
            j++;
        }
        
        if (!needle[j] || j  == len)
        {
            return ((char *)&haystack[i]);
        }
        i++;
    }
    return (0);
}