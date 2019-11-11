/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:45:30 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 14:08:13 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] && s)
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
