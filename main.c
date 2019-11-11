/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:34:32 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:30:57 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


/* Читаем двумерный массив - ровно 5 строк (валидная фигура)
 */
int		gettet(char ***s, int fd, int count)  
{
	int		i;
	char	**s1;

	s1 = *s;
	i = 0;
	while (i < 5 && count > 0)
	{
		count = get_next_line(fd, &s1[i]);
		i++;
	}
	*s = s1;
	if (i != 5)
	{
		clean(*s, i - 1);
		return (-1);
	}
	return (count);
}

/* Вывод на экран минимального квадрата с заполенными фигурами тетрамино - заключительное действи. */

void	print(char **s, t_xy *pt1)
{
	int i;

	i = 0;
	while (i < pt1->size)
	{
		ft_putstr(s[i]);
		write(1, "\n", 1);
		i++;
	}
}


/* Примечание:
Наличие такого количества функций и переменных обусловленно Нормой школы 21 (Ecole 42) - не более 25 строк кода и т.д.
*/

/* Основаная функция часть 2 - принимаем из файла квадраты 4x4 с фигуркой, проверяем их на валидность, записываем в LinkedList,
запускаем функцию поиска наименьшего квадрата для заполнения фигурами тетрамино. */

int		mktetr(char **s, t_xy *pt1, int *arr, t_list **head) 
{
	int		count;

	count = 1;
	while (count > 0)
	{
		s = (char**)malloc(sizeof(char*) * 5);
		count = gettet(&s, pt1->fd, count);
		if (count == -1)
			return (0);
		if (count == 0)
			s[4] = ft_strnew(0);
		if (!(Validation(s, pt1)))
			if (!(clean(s, 5)))
				return (0);
		MakeArray(s, arr);
		ft_lstadd(head, arr, pt1->n);
		s = clean(s, 5);
		pt1->n += 1;
	}
	count = getmintl(pt1->n);
	s = tab_empty(count);
	pt1->size = count;
	FindMinSqrt(&s, *head, pt1);
	print(s, pt1);
	return (1);
}

t_xy	*def(t_xy *pt1, int fd)
{
	pt1 = (t_xy*)malloc(sizeof(t_xy));
	pt1->x = 0;
	pt1->y = 0;
	pt1->a = 0;
	pt1->n = 0;
	pt1->fd = fd;
	return (pt1);
}

/* Основаная функция часть 1 - открытие файлы, инициализация переменных */

int		main(int argc, char **argv)
{
	int		fd;
	char	**s;
	int		arr[8];
	t_list	*head;
	t_xy	*pt1;

	head = NULL;
	pt1 = NULL;
	s = NULL;
	if (argc != 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	pt1 = def(pt1, fd);
	if (fd == -1)
		return (-1);
	if (!(mktetr(s, pt1, arr, &head)))
	{
		ft_putstr("error");
		write(1, "\n", 1);
	}
	free(pt1);
	close(fd);
	return (0);
}
