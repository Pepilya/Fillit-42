/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:05:56 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 14:04:21 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	start(char const *s)
{
	int				i;
	char	const	*start;

	start = s;
	i = 0;
	while ((start[i] && (start[i] == ' ' || start[i] == '\n'
	|| start[i] == '\t')))
		i++;
	if (start[i] == 0)
		return (0);
	return (i);
}

static	int	end(char const *s)
{
	int				i;
	char	const	*end;

	end = s;
	i = 0;
	while (end[i])
		i++;
	i--;
	while ((end[i] == ' ' || end[i] == '\n' || end[i] == '\t') && i > 0)
		i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*buf;
	int		i;
	int		j;
	int		c;

	if (s == NULL)
		return (NULL);
	j = start(s);
	c = end(s);
	buf = (char*)malloc(c - j + 2);
	if (buf == NULL || (c - j + 2) == 0)
		return (NULL);
	i = 0;
	if (j != c)
	{
		while (s[j] && j <= c)
		{
			buf[i] = s[j];
			i++;
			j++;
		}
	}
	buf[i] = 0;
	return (buf);
}
