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


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  index;

    index = 0;
    while (s1[index] && s2[index] && index < n - 1)
    {
        if (s1[index] != s2[index])
            return (s1[index] - s2[index]);
        index++;
    }

    return (s1[index] - s2[index]);
}