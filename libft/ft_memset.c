/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:41:31 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/17 20:51:10 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	s = (char*)str;
	i = 0;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
