/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:04:53 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 18:47:00 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
{
	int i;
	int size;
	int *range;
	int sign;

	i = 0;
	sign = 1;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int*)malloc(sizeof(size) * size);
	if (range == NULL || (sizeof(size) * size) == 0)
		return (NULL);
	sign = (min + max) > 0 ? 1 : -1;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
