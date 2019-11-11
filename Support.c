/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:55:42 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:28:21 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

char	**clean(char **buf, int n)
{
	int i;

	i = 0;
	while (i < n && buf[i])
	{
		if (buf[i] != NULL)
		{
			free(buf[i]);
			buf[i] = NULL;
		}
		i++;
	}
	free(buf);
	buf = NULL;
	return (NULL);
}
