/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/19 16:16:30 by juitz            ###   ########.fr       */
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
		counter += ft_printnbr((long int) args);
	if (*format == 'u')
		counter += ft_print_unsigned((unsigned long int) args);
	/* else if (*format == 'x')
		counter += ft_print_hexa((unsigned long long) args, format);
	else if (*format == 'X')
		counter += ft_print_hexa((unsigned long long) args, format);
	else if (*format == 'p')
		counter += ft_print_pointer((unsigned long long) args);
	else if (*format == '%')
		counter += ft_putchar('%'); */
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
			if (ft_strchr("cspdiuxX", *str))
				counter += check_type(str, va_arg(args, void *));
			else if (*str == '%')
				counter += ft_putchar (*str);
		}
		else 
			counter += ft_putchar (*str);
		str++;
	}
	va_end(args);
	return (counter);
}
#include <stdio.h>

int	main(void)
{
	int				res1 = 0;
	int				res2 = 0;
	char			c = '#';
	char			*str = "Hello_World I love m,y li(f)es";
	int				pnbr = 42;
	void			*ptr = &pnbr; //0;
	int				nbr = 2147483647; //min int
	unsigned int	unbr = 4294967295; //max uint
	char			*format;

	res1 = printf("Og_Character: %c\n", c);
	res2 = ft_printf("ft_Character: %c\n", c);
	printf("Result1 for 'c': %d\n", res1);
	ft_printf("Result2 for 'c': %d\n\n", res2);

	res1 = printf("Og_String: %s\n", str);
	res2 = ft_printf("ft_String: %s\n", str);
	printf("Result1 for 's': %d\n", res1);
	ft_printf("Result2 for 's': %d\n\n", res2);

	res1 = printf("Og_String: %p\n", ptr);
	res2 = ft_printf("ft_String: %p\n", ptr);
	printf("Result1 for 'p': %d\n", res1);
	ft_printf("Result2 for 'p': %d\n\n", res2);

	res1 = printf("Og_Decimal Number and Integer Number: %d and %i\n", nbr, nbr);
	res2 = ft_printf("ft_Decimal Number and Integer Number: %d and %i\n", nbr, nbr);
	printf("Result1 for 'd' and 'i': %d\n", res1);
	ft_printf("Result2 for 'd' and 'i': %d\n\n", res2);

	res1 = printf("Og_Unsigned Integer Number: %u\n", unbr);
	res2 = ft_printf("ft_Unsigned Integer Number: %u\n", unbr);
	printf("Result1 for 'u': %d\n", res1);
	ft_printf("Result2 for 'u': %d\n\n", res2);

	res1 = printf("Og_Hexadecimal Number in uppercase and in lowercase: %X and %x\n", unbr, unbr);
	res2 = ft_printf("ft_Hexadecimal Number in uppercase and in lowercase: %X and %x\n", unbr, unbr);
	printf("Result1 for 'X' and 'x': %d\n", res1);
	ft_printf("Result2 for 'X' and 'x': %d\n\n", res2);

	res1 = printf("Og_Percentage-Character: %%\n");
	res2 = ft_printf("ft_Percentage-Character: %%\n");
	printf("Result1 for '%%': %d\n", res1);
	ft_printf("Result2 for '%%': %d\n\n", res2);

	format = ("%");
	res1 = printf("Og_printf: \t%d\n", printf(format));
	res2 = printf("ft_printf: \t%d\n", ft_printf(format));
	printf("Result1: \t%d\n", res1);
	printf("Result2: \t%d\n\n", res2);

	format = ("%s%");
	res1 = printf("Og_printf: \t%d\n", printf(format, "Hello_World\n"));
	res2 = printf("ft_printf: \t%d\n", ft_printf(format, "Hello_World\n"));
	printf("Result1: \t%d\n", res1);
	printf("Result2: \t%d\n\n", res2);

	format = ("%s%Hello_World\n");
	res1 = printf("Og_printf: \t%d\n", printf(format, "Hello_World\n"));
	res2 = printf("ft_printf: \t%d\n", ft_printf(format, "Hello_World\n"));
	printf("Result1: \t%d\n", res1);
	printf("Result2: \t%d\n\n", res2);

	format = (NULL);
	res1 = printf("Og_printf: \t%d\n", printf(format));
	res2 = printf("ft_printf: \t%d\n", ft_printf(format));
	printf("Result1: \t%d\n", res1);
	printf("Result2: \t%d\n\n", res2);

	return (0);
}