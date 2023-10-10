/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/10 15:51:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check_type(const char *inputs void *arg)
{
	int	counter;

	counter = 0;
	if (!inputs)
		return(-1);
	else if	(*inputs == 'c')
		counter += ft_putchar((int)arg, 1);
	else if	(*inputs == 's')
		counter += ft_strlen((char *)arg, 1);
	else if (*inputs == 'd' || *inputs == 'i')
		counter += ft_putnbr((int)arg, 1);
	else if (*inputs == 'u')
		counter += ft_print_unsigned((unsigned int)arg, 1)

	else if (*inputs == 'p')

	else if (*inputs == 'x')
		counter += ft_print_hexa((unsigned int)arg, 1)

	else if (*inputs == 'X')
		counter += ft_print_hexa((unsigned int)arg, 1)

	else if (*inputs == '%')
		counter += ft_putchar('%', 1)
	return (counter);
}

int ft_printf(const char *inputs, ...)
{
	va_list	args;
	unsigned int	counter;

	counter = 0;
	va_start(args, inputs);

	while (*inputs)
		if (*inputs == '%')
			counter++;
			if (ft_strchr("cspdiuxX%", inputs))
				counter += check_type(inputs, va_arg(args, void *));
	va_end(args);
	return (counter);
}

int	main(void)
{
	ft_printf("%s", "Hello");
}