/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:20:53 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:51:05 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]) == 0);
}
