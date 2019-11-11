/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:51:55 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:28:26 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* Создание структуры связанный список с координатами, буквой заполнения,
и порядковым номером фигуры. */

t_list	*ft_lstnew(int *arr, size_t n)
{
	t_list	*head;
	int		*val;
	int		i;

	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(val = (int*)malloc(sizeof(int) * 8)))
	{
		free(head);
		return (NULL);
	}
	i = 0;
	while (i < 8)
	{
		val[i] = arr[i];
		i++;
	}
	head->content = val;
	head->n = n;
	head->c = n + 'A';
	head->next = NULL;
	head->prev = NULL;
	return (head);
}
/* Создание структуры связанный список с координатами, буквой заполнения,
и порядковым номером фигуры. */

void	ft_lstadd(t_list **head, int *arr, size_t n) 
{
	t_list *temp;
	t_list *lst;
	t_list *p;

	if (*head == NULL)
		*head = ft_lstnew(arr, n);
	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		temp = ft_lstnew(arr, n);
		p = lst->next;
		lst->next = temp;
		temp->next = p;
		temp->prev = lst;
		if (p != NULL)
			p->prev = temp;
	}
}
