/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/16 13:41:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

static int	check_type(const char *format, va_list args)
{
	unsigned int	counter;

	counter = 0;
	if (!format)
		return(-1);
	else if	(*format == 'c')
		ft_putchar(va_arg(args, int));
	else if	(*format == 's')
		ft_putstr(va_arg(args, char *));
	else if (*format == 'd' || *format == 'i')
		ft_printnbr(va_arg(args, int), &counter);
	else if (*format == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), &counter);
	// else if (*format == 'p')
	// 	counter += ft_print_pointer((unsigned long)args);
	/* else if (*format == 'x')
		counter += ft_print_hexa(va_arg(args, unsigned int));
	else if (*format == 'X')
		counter += ft_print_hexa(va_arg(args, unsigned int));
	else if (*format == '%')
		counter += ft_putchar('%'); */
	return (counter);
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	unsigned int	counter;
	
	counter = 0;
	va_start(args, str);

	while (*str)
		if (*str == '%')
			counter++;
			if (ft_strchr("cspdiuxX%",(char *)str))
				counter += check_type(str, va_arg(args, void *));
	va_end(args);
	return (counter);
}
#include <stdio.h>
int	main(void)
{
	ft_printf("%s", "Hello");
	printf("%s", "Hello");
}