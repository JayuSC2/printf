/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:48:40 by codespace         #+#    #+#             */
/*   Updated: 2023/10/06 11:36:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

void	ft_print_unsigned (unsigned int n, int fd)
{
	char	ch;

	if (n < 0)
	{
		n *= -1;
	}
	if (n >= 0 && n < 10)
	{
		ch = n + '0';
		write(fd, &ch, 1);
	}
	if (n >= 10 && n <= 2147483647)
	{
		ft_print_unsigned(n / 10, fd);
		ft_print_unsigned(n % 10, fd);
	}
}

#include <stdio.h>
int main(void)
{
    ft_print_unsigned(-4, 1);
}
