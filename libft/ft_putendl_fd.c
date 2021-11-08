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

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

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