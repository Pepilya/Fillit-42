/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:31:35 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:51:12 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
