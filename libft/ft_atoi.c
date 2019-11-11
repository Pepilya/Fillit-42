/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:05:28 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:48:46 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	long	int	ft_atoll(const char *str)
{
	int					sign;
	long	long	int	res;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str > 47 && *str < 58)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (res < 0)
	{
		if (sign < 0)
			return (0);
		else
			return (-1);
	}
	return (res * sign);
}

int							ft_atoi(const char *str)
{
	int res;

	res = (int)ft_atoll(str);
	return (res);
}
