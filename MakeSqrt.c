/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makesqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:44:29 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:03:18 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* В соответствии с количеством тетрамино
в файле мы создаем минимальный пустой квадрат для дальнейшего заполнения */

char	**tab_empty(int length)
{
	char	**table;
	int		i;
	int		j;

	table = (char **)malloc(sizeof(char *) * length);
	i = 0;
	while (i < length)
	{
		table[i] = (char *)malloc(sizeof(char) * (length + 1));
		j = 0;
		while (j < length)
		{
			table[i][j] = '.';
			j += 1;
		}
		table[i][length] = '\0';
		i += 1;
	}
	return (table);
}

/* В соответствии с количеством тетрамино
в файле мы создаем минимальный пустой квадрат для дальнейшего заполнения */

int		getmintl(int count) 
{
	int		length;

	count = 4 * count;
	while ((length = ft_sqrt(count)) == 0)
		count += 1;
	return (length);
}