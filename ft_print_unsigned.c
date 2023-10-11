/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:48:40 by codespace         #+#    #+#             */
/*   Updated: 2023/10/11 14:49:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

void	ft_print_unsigned (unsigned int n)
{
	char	ch;

	if (n >= 0 && n < 10)
	{
		ch = n + '0';
		write(1, &ch, 1);
	}
	if (n >= 10 && n <= 4294967295)
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
}

#include <stdio.h>
int main(void)
{
    //ft_print_unsigned(-4);
	printf("%u",-4);
}
