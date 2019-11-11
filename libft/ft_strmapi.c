/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:46:58 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:51:31 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;
	size_t	size;

	if (s == NULL || f == NULL)
		return (NULL);
	size = 0;
	while (s[size])
		size++;
	if ((map = ft_strnew(size)) != NULL)
	{
		i = 0;
		while (s[i])
		{
			map[i] = (*f)(i, s[i]);
			i++;
		}
		map[i] = 0;
		return (map);
	}
	return (NULL);
}
