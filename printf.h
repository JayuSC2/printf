/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:48:49 by juitz             #+#    #+#             */
/*   Updated: 2023/10/19 15:32:11 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_printnbr(int n);
int     ft_putchar(int c);
int     ft_putstr(char *s);
int     ft_print_hexa(unsigned int num, const char format);
int     ft_print_unsigned (unsigned int n);
size_t     ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);

#endif