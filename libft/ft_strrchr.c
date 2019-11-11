/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:35:00 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:51:51 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (str[i] == c)
		return ((char*)str + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char*)str + i);
		i--;
	}
	return (NULL);
}
