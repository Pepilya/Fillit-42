/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:02:30 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 14:01:55 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		sz(char const *s, unsigned int start, size_t len)
{
	size_t size;

	size = 0;
	while (s[start] && size < len)
	{
		start++;
		size++;
	}
	return (size);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	j;
	char	*buf;

	if (s == NULL)
		return (NULL);
	j = start;
	size = sz(s, start, len);
	if (size == len)
	{
		if (!(buf = (char*)malloc(size + 1)) || (size + 1) == 0)
			return (NULL);
		buf = ft_strncpy(buf, s + start, size + 1);
		if (buf[size] != 0)
			buf[size] = 0;
		return (buf);
	}
	return (NULL);
}
