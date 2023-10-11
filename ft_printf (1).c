/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf (1).c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/11 15:23:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check_type(const char *format, void *arg)
{
	int	counter;

	counter = 0;
	if (!format)
		return(-1);
	else if	(*format == 'c')
		counter += ft_putchar((int)arg);
	else if	(*format == 's')
		counter += ft_strlen((char *)arg);
	else if (*format == 'd' || *format == 'i')
		counter += ft_putnbr((int)arg);
	else if (*format == 'u')
		counter += ft_print_unsigned((unsigned int)arg, 1);
	else if (*format == 'p')
		counter += ft_print_pointer((unsigned long)arg, 1);
	else if (*format == 'x')
		counter += ft_print_hexa((unsigned int)arg, 1);
	else if (*format == 'X')
		counter += ft_print_hexa((unsigned int)arg, 1);
	else if (*format == '%')
		counter += ft_putchar(1, '%', 1);
	return (counter);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	unsigned int	counter;

	counter = 0;
	va_start(args, format);

	while (*format)
		if (*format == '%')
			counter++;
			if (ft_strchr("cspdiuxX%", format))
				counter += check_type(format, va_arg(args, void *));
	va_end(args);
	return (counter);
}

int	main(void)
{
	ft_printf("%s", "Hello");
	printf("%s", "Hello");
}