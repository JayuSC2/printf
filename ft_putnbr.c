/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:22:19 by juitz             #+#    #+#             */
/*   Updated: 2023/10/11 14:47:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

int	ft_putnbr(int n, int *counter)
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
		ft_putnbr(n / 10, counter);
		ft_putnbr(n % 10, counter);
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*counter = 11;
		return (11);
	}
	return (*counter);
}
#include <stdio.h>
int	main(void)
{
	int	counter = 0;
	
	/* ft_putnbr (2147483647, &counter);
	write (1, "\n", 1);
	printf("%d", counter);
	ft_putnbr (-100, &counter);
	write (1, "\n", 1);
	ft_putnbr (35340503, &counter);
	write (1, "\n", 1); */
	ft_putnbr (-2147483648, &counter);
	write (1, "\n", 1);
}
