/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:48:05 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 18:33:54 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned	char			*dest;
	unsigned	const	char	*src;
	size_t						i;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (dest > src)
		{
			i++;
			dest[n - i] = src[n - i];
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return ((char *)dest);
}
