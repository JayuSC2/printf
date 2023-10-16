/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:48:49 by juitz             #+#    #+#             */
/*   Updated: 2023/10/16 12:08:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_printnbr(int n, unsigned int*);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_print_hexa(unsigned int num, const char format);
int     ft_print_unsigned (unsigned int n, unsigned int *counter);
size_t     ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);

#endif