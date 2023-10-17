/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/17 12:45:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>


static int	check_type(const char *format, void *args)
{
	unsigned int	counter;

	counter = 0;
	if	(*format == 'c')
		counter += ft_putchar((long int) args);
	else if	(*format == 's')
		counter += ft_putstr((char *) args);
	else if (*format == 'd' || *format == 'i')
		counter += ft_printnbr((long int) args, &counter);
	else if (*format == 'u')
		counter += ft_print_unsigned((unsigned long int) args, &counter);
	else if (*format == 'x')
		counter += ft_print_hexa((unsigned long long) args, format);
	else if (*format == 'X')
		counter += ft_print_hexa((unsigned long long) args, format);
	//else if (*format == 'p')
		//counter += ft_print_pointer((unsigned long long) args);
	else if (*format == '%')
		counter += ft_putchar('%');
	return (counter);
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	unsigned int	counter;

	counter = 0;
	if (!str)
		return(-1);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX%", *str))
				counter += check_type(str, va_arg(args, void *));
		}
		else 
		(ft_putchar (*str));
		str++;
	}
	va_end(args);
	return (counter);
}
#include <stdio.h>
int	main(void)
{
	ft_printf("%u\n", 42);
	printf("%u\n", 42);
	ft_printf("%c\n", 'H');
	printf ("%c\n", 'H');
	ft_printf("%%\n", "Hello");
	printf("%%\n", "Hello");
	ft_printf("%d\n", 42);
	printf("%d\n", 42);
	/* int my_value;
	int original;
	my_value = printf(NULL);
	original = ft_printf(NULL);

	printf("my value is %d, original value is %d", my_value, original); */
	
}