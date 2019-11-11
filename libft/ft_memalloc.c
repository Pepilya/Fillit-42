/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:55:21 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:54:27 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *c;

	c = (void*)malloc(size);
	if (c == NULL || size == 0)
		return (NULL);
	ft_bzero(c, size);
	return (c);
}
