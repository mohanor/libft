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

int memcmp(const void *s1, const void *s2, size_t n)
{

}



int ft_memcmp(const char *s1, const char *s2, size_t n)
{
    size_t  index;

    index = 0;
    while (index < n - 1)
    {
        if (s1[index] != s2[index])
            return (s1[index] - s2[index]);
        index++;
    }

    return (s1[index] - s2[index]);
}