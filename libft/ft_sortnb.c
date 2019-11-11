/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortnb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:40:37 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 18:54:27 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sortnb(int *tab, int size)
{
	int tmp;
	int i;
	int len;

	tmp = 0;
	i = 0;
	while (i != size)
	{
		len = size - 1;
		while (len != i)
		{
			if (tab[len] < tab[i])
			{
				tmp = tab[len];
				tab[len] = tab[i];
				tab[i] = tmp;
			}
			len--;
		}
		i++;
	}
}
