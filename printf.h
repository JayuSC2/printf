/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:48:49 by juitz             #+#    #+#             */
/*   Updated: 2023/10/11 16:16:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_putnbr(int n, int *counter);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_print_hexa(unsigned int num, const char format);
int     ft_print_unsigned (unsigned int n, int *counter);
size_t     ft_strlen(const char *s);

#endif