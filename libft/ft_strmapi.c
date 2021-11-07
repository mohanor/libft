/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:30:52 by matef             #+#    #+#             */
/*   Updated: 2021/11/07 16:30:58 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    index;
    unsigned int    len;
    char *ptr;

    index = 0;
    while (s[index])
        index++;

    ptr = (char *)malloc(index);

    index = 0;
    while (s[index])
    {
        ptr[index] = f(index, s[index]);
        index++;
    }

    return (ptr);
}