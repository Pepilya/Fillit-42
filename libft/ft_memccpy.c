/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:30:41 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:47:39 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t				i;
	unsigned	char	*str1;
	unsigned	char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char)c)
			return ((char*)&str1[i + 1]);
		i++;
	}
	return (NULL);
}
