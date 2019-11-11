/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:22:31 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:51:21 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*bufer(char *dest, const char *src, size_t n)
{
	size_t srcsize;
	size_t destsize;

	destsize = ft_strlen(dest);
	srcsize = 0;
	while (src[srcsize] && srcsize < n)
	{
		dest[destsize] = src[srcsize];
		destsize++;
		srcsize++;
	}
	dest[destsize] = 0;
	return (dest);
}

size_t			ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t destsize;
	size_t srcsize;
	size_t c;

	destsize = ft_strlen(dest);
	if (n >= destsize + 1)
	{
		c = n - (destsize + 1);
		bufer(dest, src, c);
	}
	else
		destsize = n;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	c = destsize + srcsize;
	return (c);
}
