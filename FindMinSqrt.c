/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindMinSqrt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:48:20 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:28:19 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* Часть 2 функции по поиску места для фигуры */

int		Findplace(char **s, int *arr, t_xy *pt1, char c)
{
	int n;

	n = 0;
	while (n < 7)
	{
		pt1->x += arr[n];
		pt1->y += arr[n + 1];
		if (pt1->y >= pt1->size || pt1->y >= pt1->size)
			break ;
		if (s[pt1->y][pt1->x] != c)
			break ;
		pt1->x -= arr[n];
		pt1->y -= arr[n + 1];
		n += 2;
	}
	if (n > 7)
		return (1);
	pt1->x -= arr[n];
	pt1->y -= arr[n + 1];
	return (0);
}

/* Часть 1 функции по поиску места для фигуры */

int		Filtable(char **s, int *arr, char c, t_xy *pt1)
{
	int n;

	pt1->y = 0;
	n = 0;
	while (pt1->y < pt1->size)
	{
		pt1->x = 0;
		while (s[pt1->y][pt1->x])
		{
			if (Findplace(s, arr, pt1, '.'))
			{
				Pointtet(s, arr, pt1, c);
				return (1);
			}
			pt1->x += 1;
		}
		pt1->y += 1;
	}
	pt1->a = -1;
	return (0);
}

/* Заполнение фигурой */

void	Pointtet(char **s, int *arr, t_xy *pt1, char c)
{
	int n;

	n = 0;
	while (n < 7)
	{
		pt1->x += arr[n];
		pt1->y += arr[n + 1];
		s[pt1->y][pt1->x] = c;
		pt1->x -= arr[n];
		pt1->y -= arr[n + 1];
		n += 2;
	}
}

/* Функция сдвига фигуры, ищет нужную нам фигуру и пытается найти ей другое место */

int		Replace(char **s, t_list *head, t_xy *pt1, int f)
{
	if (pt1->a == -1)
		pt1->a = 0;
	pt1->y = 0;
	while (pt1->y < pt1->size)
	{
		pt1->x = 0;
		while (s[pt1->y][pt1->x])
		{
			if (Findplace(s, head->content, pt1, head->c))
			{
				Pointtet(s, head->content, pt1, '.');
				pt1->x += 1;
				f = 1;
			}
			if ((Findplace(s, head->content, pt1, '.')) && f == 1)
			{
				Pointtet(s, head->content, pt1, head->c);
				return (1);
			}
			pt1->x += 1;
		}
		pt1->y += 1;
	}
	pt1->a = -1;
	return (0);
}

/* Если после перебора всех возможных вариантов фигуры не вошли в квадрат - увеличиваем квадрат */

char	**AddTab(char **s, t_xy *pt1)
{
	s = clean(s, pt1->size);
	s = tab_empty(pt1->size + 1);
	pt1->a = 0;
	return (s);
}

/* Цикл поиска нименьшего квадрата -он основан на переборе вариантов начиная с первой фигуры,
если следующая фигура не помещается, сдвигаем предыдущую и так далеe */

void	FindMinSqrt(char ***s, t_list *head, t_xy *pt1)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		if (pt1->a != -1)
			i = Filtable(*s, head->content, head->c, pt1);
		if (pt1->a == -1)
		{
			if (head->prev == NULL)
			{
				*s = AddTab(*s, pt1);
				pt1->size += 1;
			}
			else
			{
				if (Replace(*s, head->prev, pt1, 0) == 0)
					head = head->prev;
			}
		}
		if (i == 1)
			head = head->next;
	}
}
