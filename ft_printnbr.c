/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:22:19 by juitz             #+#    #+#             */
/*   Updated: 2023/10/16 09:42:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

int	ft_printnbr(int n, unsigned int *counter)
{
	char	nb;
	
	if (n < 0 && n > -2147483648)
	{
		write(1, "-", 1);
		n *= -1;
		*counter = *counter + 1;
	}
	if (n >= 0 && n < 10)
	{
		nb = n + '0';
		write(1, &nb, 1);
		*counter = *counter + 1; 
	}
	if (n >= 10 && n <= 2147483647)
	{
		ft_printnbr(n / 10, counter);
		ft_printnbr(n % 10, counter);
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*counter = 11;
		return (11);
	}
	return (*counter);
}
/* #include <stdio.h>
int	main(void)
{
	int	counter = 0;
	
	/* ft_printnbr (2147483647, &counter);
	write (1, "\n", 1);
	printf("%d", counter);
	ft_printnbr (-100, &counter);
	write (1, "\n", 1);
	ft_printnbr (35340503, &counter);
	write (1, "\n", 1);
	ft_printnbr (-2147483648, &counter);
	write (1, "\n", 1);
	printf("%d", counter);*/