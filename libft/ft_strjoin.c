/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:17:51 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 14:03:50 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*buf;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	buf = (char*)malloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1);
	if (buf == NULL || (ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1) == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		buf[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		buf[i] = s2[j];
		i++;
		j++;
	}
	buf[i] = 0;
	return (buf);
}
