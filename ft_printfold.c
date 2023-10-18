/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfold.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/18 14:34:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>


static int	check_type(const char *format, void *args)
{
	unsigned int	c;
	
	c = 0;
	if (*format == 'c')
		c += ft_putchar((long int) args);
	else if	(*format == 's')
		c += ft_putstr((char *) args);
	else if (*format == 'd' || *format == 'i')
		c += ft_printnbr((long int) args, &c);
	else if (*format == 'u')
		c += ft_print_unsigned((unsigned long int) args, &c);
	/* else if (*format == 'x')
		c += ft_print_hexa((unsigned long long) args);
	else if (*format == 'X')
		c += ft_print_hexa((unsigned long long) args); */
	/* else if (*format == 'p')
		c += ft_print_pointer((unsigned long long) args); */
	else if (*format == '%')
		c += ft_putchar('%');
	return (c);
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	unsigned int	c;

	c = 0;
	if (!str)
		return(-1);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			/* if (*str == '\0')
				return (-1); */
			if (ft_strchr("cspdiuxX%", *str))
				c += check_type(str, va_arg(args, void *));
		}
		else 
			c += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (c);
}
#include <stdio.h>
int	main(void)
{

	/* unsigned int	res1 = 0;
	unsigned int	res2 = 0;
	char			c = '#';
	char			*str = "Hello_World I love m,y li(f)es";
	int				pnbr = 42;
	void			*ptr = &pnbr; //0;
	int				nbr = -2147483647; //min int
	unsigned int	unbr = 4294967295; //max uint
	char			*format;

	res1 = printf("Og_Character: %c\n", c);
	res2 = ft_printf("ft_Character: %c\n", c);
	printf("Result1 for 'c': %d\n", res1);
	ft_printf("Result2 for 'c': %d\n\n", res2);

	res1 = printf("Og_String: %s\n", str);
	res2 = ft_printf("ft_String: %s\n", str);
	printf("Result1 for 's': %d\n", res1);
	ft_printf("Result2 for 's': %d\n\n", res2); */

	/* res1 = printf("Og_String: %p\n", ptr);
	res2 = ft_printf("ft_String: %p\n", ptr);
	printf("Result1 for 'p': %d\n", res1);
    ft_printf("Result2 for 'p': %d\n\n", res2);

	res1 = printf("Og_Decimal Number and Integer Number: %d and %i\n", nbr, nbr);
	res2 = ft_printf("ft_Decimal Number and Integer Number: %d and %i\n", nbr, nbr);
	printf("Result1 for 'd' and 'i': %d\n", res1);
	ft_printf("Result2 for 'd' and 'i': %d\n\n", res2);
if (*format == '%')
		c += ft_putchar('%');
	res1 = printf("Og_Unsigned Integer Number: %u\n", unbr);
	res2 = ft_printf("ft_Unsigned Integer Number: %u\n", unbr);
	printf("Result1 for 'u': %d\n", res1);
	ft_printf("Result2 for 'u': %d\n\n", res2);

	res1 = printf("Og_Hexadecimal Number in uppercase and in lowercase: %X and %x\n", unbr, unbr);
	res2 = ft_printf("ft_Hexadecimal Number in uppercase and in lowercase: %X and %x\n", unbr, unbr);
	printf("Result1 for 'X' and 'x': %d\n", res1);
	ft_printf("Result2 for 'X' and 'x': %d\n\n", res2);*/

	//res1 = printf("%%\n");
	//res2 = ft_printf("%%\n");
	/* printf("Result1 for 2 perc: %d\n", printf("%%\n"));
	ft_printf("Result2 for 2 perc: %d\n", ft_printf("%%\n")); */

	/*format = ("%");
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

	return (0);*/


	ft_printf("%u\n", 42);
	printf("%u\n", 42);
	ft_printf("%c\n", 'H');
	printf ("%c\n", 'H');
	ft_printf("%%\n", "Hello");
	printf("%%\n", "Hello");
	ft_printf("%d\n", 42);
	printf("%d\n", 42);
	ft_printf("%");
	printf("%");
	//ft_printf("%x\n", 13);
	//printf("%x\n", 13);
	/* int my_value;
	int original;
	my_value = printf(NULL);
	original = ft_printf(NULL);
 */
	//printf("my value is %d, original value is %d", my_value, original);
}