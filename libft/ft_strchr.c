/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:32:09 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:50:35 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char*)str + i);
		i++;
	}
	if (str[i] == c)
		return ((char*)str + i);
	return (NULL);
}
