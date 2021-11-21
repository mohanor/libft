/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:57:48 by matef             #+#    #+#             */
/*   Updated: 2021/11/21 00:25:05 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pnbr(long int nbr, int fd)
{
	char	c;

	if (nbr < 0)
	{
		c = '-';
		write(fd, &c, 1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		c = nbr + 48;
		write(fd, &c, 1);
		return ;
	}
	ft_pnbr(nbr / 10, fd);
	ft_pnbr(nbr % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	ft_pnbr(nbr, fd);
}
