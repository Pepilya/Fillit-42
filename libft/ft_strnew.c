/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:11:27 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:58:45 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnew(size_t size)
{
	char *c;

	c = (char*)malloc(size + 1);
	if (c == NULL || (size + 1) == 0)
		return (NULL);
	ft_bzero(c, size + 1);
	return (c);
}
