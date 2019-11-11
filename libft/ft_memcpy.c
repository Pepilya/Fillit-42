/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:10:02 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:49:58 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char*)s1;
	str2 = (char*)s2;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
