/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:48:49 by juitz             #+#    #+#             */
/*   Updated: 2023/10/10 15:37:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

void	ft_putnbr(int n, int fd);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *s, int fd);
int     ft_print_hexa(unsigned int num, const char format)
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif