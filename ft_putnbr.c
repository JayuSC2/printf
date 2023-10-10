/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:22:19 by juitz             #+#    #+#             */
/*   Updated: 2023/10/10 12:08:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

void	ft_putnbr_fd(int n)
{
	char	ch;
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		counter += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		counter += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n < 10)
	{
		ch = n + '0';
		counter += write(1, &ch, 1);
	}
	if (n >= 10 && n <= 2147483647)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd (2147483647);
	write (fd, "\n", 1);
	ft_putnbr_fd (-100);
	write (fd, "\n", 1);
	ft_putnbr_fd (35340503);
	write (fd, "\n", 1);
	ft_putnbr_fd (-2147483648);
	write (fd, "\n", 1);
}
*/