/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sb <sb@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:03:35 by ipepelia          #+#    #+#             */
/*   Updated: 2019/11/11 13:28:25 by sb               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef	struct		s_list
{
	int				*content;
	char			c;
	size_t			n;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef	struct		s_xy
{
	int				x;
	int				y;
	int				a;
	int				size;
	int				fd;
	int				n;
}					t_xy;

				/*Validation*/
int					Countlink(char **s, int i, int j);
int					Validation(char **s, t_xy *pt1);
				/*MakeArray*/
void				MinArray(int **arr, int n);
void				MakeArray(char **s, int *arr);
				/*LinkedList*/
t_list				*ft_lstnew(int *arr, size_t n);
void				ft_lstadd(t_list **head, int *arr, size_t n);
				/*FindMinSqrt*/
int					Findplace(char **s, int *arr, t_xy *pt1, char c);
int					Filtable(char **s, int *arr, char c, t_xy *pt1);
int					Replace(char **s, t_list *head, t_xy *pt1, int f);
char				**AddTab(char **s, t_xy *pt1);
void				FindMinSqrt(char ***s, t_list *head, t_xy *pt1);
void				Pointtet(char **s, int *arr, t_xy *pt1, char c);
				/*MakeSqrt*/
char				**tab_empty(int length);
int					getmintl(int count);
				/*Support*/
int					ft_sqrt(int nb);
char				**clean(char **buf, int n);

#endif
