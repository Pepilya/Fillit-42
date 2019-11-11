/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:53:54 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 14:05:55 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*formstr(char *str, int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i++;
	}
	if (n > 0)
	{
		while (n % 10 > 0 || n / 10 > 0)
		{
			str[i] = n % 10 + '0';
			n = n / 10;
			i++;
		}
	}
	else
	{
		str[i] = n % 10 + '0';
		i++;
	}
	str[i] = 0;
	return (str);
}

static	int		sz(int n)
{
	int i;
	int flag;

	if (n == -0 || n == 0)
		return (1);
	i = 0;
	flag = 0;
	if (n < 0)
	{
		n = n * -1;
		flag = 1;
	}
	while (n / 10 > 0 || i == 0)
	{
		if (flag == 1)
		{
			i++;
			flag = 0;
		}
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static	char	*revers(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	i--;
	j = 0;
	if (str[j] == '-')
		j++;
	while (j <= i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;

	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	i = 0;
	size = sz(n);
	if (!(str = ft_strnew(size)))
		return (NULL);
	str = formstr(str, n);
	revers(str);
	return (str);
}
