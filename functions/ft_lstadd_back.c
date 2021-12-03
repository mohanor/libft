/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:37:06 by matef             #+#    #+#             */
/*   Updated: 2021/11/20 23:04:58 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstptr;

	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	lstptr = ft_lstlast(*lst);
	lstptr->next = new;
}
