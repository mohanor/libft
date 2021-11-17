/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:47:24 by matef             #+#    #+#             */
/*   Updated: 2021/11/08 10:47:28 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    unsigned int    index;

    index = 0;
    while (s[index])
    {
        ft_putchar_fd(s[index], fd);
        index++;
    }

    ft_putchar_fd('\n', fd);
}