/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:12:54 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 13:12:55 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s) - 1;

    while (0 <= len)
    {
        if (s[len] == c)
            return (&s[len]);
        len--;
    }
    return (NULL);
}