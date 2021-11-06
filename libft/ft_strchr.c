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


char *ft_strchr(const char *s, int c)
{
    int index;

    index = 0;
    while (s[index])
    {
        if (s[index] == c)
            return (&s[index]);
        index++;
    }

    return (NULL);
}