/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:44:29 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:30:55 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* Считаем колличество связей между частями тетрамино. */

int		Countlink(char **s, int i, int j) 
{
	int	count;

	count = 0;
	if (s[i][j] == '#')
	{
		if (j < 3)
			if (s[i][j] == s[i][j + 1])
				count++;
		if (j > 0)
			if (s[i][j] == s[i][j - 1])
				count++;
		if (i < 3)
			if (s[i][j] == s[i + 1][j])
				count++;
		if (i > 0)
			if (s[i][j] == s[i - 1][j])
				count++;
	}
	return (count);
}

/* Проверка на валидность фигуры (тктрамино - фигурка из тетриса). */

int		Validation(char **s, t_xy *pt1) 
{
	int	c;

	c = 0;
	if (s[0] == NULL || s[1] == NULL || s[2] == NULL || s[3] == NULL)
		return (0);
	pt1->y = 0;
	while (pt1->y < 4)
	{
		pt1->x = 0;
		while (s[pt1->y][pt1->x] && (s[pt1->y][pt1->x] == '.'
		|| s[pt1->y][pt1->x] == '#') && pt1->x < 4)
		{
			pt1->a = pt1->a + Countlink(s, pt1->y, pt1->x);
			if (s[pt1->y][pt1->x] == '#')
				c++;
			pt1->x += 1;
		}
		if (s[pt1->y][pt1->x] != 0 || pt1->x != 4)
			return (0);
		pt1->y += 1;
	}
	if (pt1->a < 6 || c != 4 || s[pt1->y][0] != 0)
		return (0);
	pt1->a = 0;
	return (1);
}
