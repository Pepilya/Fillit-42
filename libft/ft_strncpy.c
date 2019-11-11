/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:03:04 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:37:49 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned	char	*str1;
	unsigned	char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str2[i] != 0 && i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	if (str2[i] == 0)
	{
		while (i < n)
		{
			str1[i] = 0;
			i++;
		}
	}
	return ((char*)str1);
}
