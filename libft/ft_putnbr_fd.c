/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:37:07 by ipepelia          #+#    #+#             */
/*   Updated: 2019/09/18 13:24:38 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = (unsigned int)(nb * -1);
	}
	else
		n = (unsigned int)nb;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((char)(n % 10 + '0'), fd);
}
