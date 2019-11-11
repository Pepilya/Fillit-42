/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:27:34 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 18:45:46 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(const char *str, const char *to_find, size_t nb)
{
	unsigned	char	*h;
	unsigned	char	*n;

	h = (unsigned char *)str;
	n = (unsigned char *)to_find;
	while (*n && *n == *h && nb > 0)
	{
		n++;
		h++;
		nb--;
	}
	if (*n == 0)
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t nb)
{
	size_t i;

	i = 0;
	while ((unsigned char)str[i] && i < nb && *(unsigned char*)to_find)
	{
		if ((unsigned char)str[i] == *(unsigned char*)to_find)
			if (check(&str[i], to_find, nb - i) > 0)
				if (!((int)nb < ft_strlen(to_find)))
					return ((char*)str + i);
		i++;
	}
	if (((unsigned char)str[i] == *(unsigned char*)to_find
	&& (unsigned char)str[i] == 0) || *(unsigned char*)to_find == 0)
		return ((char*)str + i);
	return (NULL);
}
