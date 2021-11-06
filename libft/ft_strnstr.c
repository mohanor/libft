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


char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
    i = 0;
    while (haystack[i])
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j])
        {
            j++;
        }
        
        if (needle[j] == '\0')
        {
            return (&haystack[i]);
        }
        i++;
    }
    return (NULL);
}