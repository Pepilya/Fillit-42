/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:25:43 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 18:14:26 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (1);
	return (((unsigned char)s1[i] - (unsigned char)s2[i]) == 0);
}
