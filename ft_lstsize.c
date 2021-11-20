/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:20:03 by matef             #+#    #+#             */
/*   Updated: 2021/11/20 14:20:07 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t  count;
    t_list  *ptr;

    ptr = lst;
    count = 0;
    while (ptr)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
}
