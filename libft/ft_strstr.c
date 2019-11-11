/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:49:06 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:52:01 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char *h;
	const char *n;

	while (*str != 0 && *to_find != 0)
	{
		if (*str == *to_find)
		{
			h = str;
			n = to_find;
			while (*n && *n == *h)
			{
				h++;
				n++;
			}
			if (*n == 0)
				return ((char*)str);
		}
		str++;
	}
	if ((*str == *to_find && *str == 0) || *to_find == 0)
		return ((char*)str);
	return (NULL);
}
