/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:40:09 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:49:46 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *str, int c, size_t n)
{
	while (n > 0 && *(unsigned char *)str != (unsigned char)c)
	{
		n--;
		str++;
	}
	if (n == 0)
		return (NULL);
	else
		return ((char*)str);
}
