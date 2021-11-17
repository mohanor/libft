/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:55:46 by matef             #+#    #+#             */
/*   Updated: 2021/11/05 15:55:49 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *) malloc(count * size);
    if (ptr == NULL)
        return (ptr);
    ft_bzero(ptr, count * size);
    return (ptr);
}

