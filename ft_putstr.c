/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:46:03 by juitz             #+#    #+#             */
/*   Updated: 2023/10/11 13:55:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

int	ft_putstr(char *s)
{	
	if (s != 0)
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}
/* int	main(void)
{
	char str[] = "Hello\n";
	ft_putstr(str);
} */
