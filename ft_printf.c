/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:54:07 by juitz             #+#    #+#             */
/*   Updated: 2023/10/09 12:10:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check_type(const char *inputs void *arg)
{
	int	i;

	i = 0;
	if (!inputs)
		return(-1);
	else if	(*inputs == 'c')
		i += ft_putchar_fd((int)arg, 1);
	else if	(*inputs == 's')
		i += ft_strlen((char *)arg, 1);
	else if (*inputs == 'd' || *inputs == 'i')
		i += ft_putnbr_fd((int)arg, 1);
	else if (*inputs == 'u')

	else if (*inputs == 'p')

	else if (*inputs == 'x')

	else if (*inputs == 'X')

	else if (*inputs == '%')
		i += ft_putchar_fd('%', 1)
	return (i);
}

int ft_printf(const char *inputs, ...)
{
	va_list	args;
	unsigned int	i;

	i = 0;
	va_start(args, inputs);

	while (*inputs)
		if (*inputs == '%')
			i++;
			if (ft_strchr("cspdiuxX%", inputs))
				i += check_type(inputs, va_arg(args, void *));
	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("%s", "Hello");
}