/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:39:47 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 11:39:48 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  index;
    char    *d;
    const char    *s;

    index = 0;
    d = (char *)dst;
    s = (const char *)src;

    if ((d == NULL) &&(s == NULL))
        return NULL;
    
    while (index < n)
    {
        d[index] = s[index];
        index++;
    }
    return ((void *)d);
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d;
    char    *s;
    
    s = (char *)src;
    d = (char *)dst;
    if ((d == NULL) &&(s == NULL))
        return NULL;

    if (s > d)
        return (ft_memcpy(d, s, len));
    
    while (len)
    {
        d[len - 1] = s[len - 1];
        len--;
    }
    
    return (void *)d;
}