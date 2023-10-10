/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:46:03 by juitz             #+#    #+#             */
/*   Updated: 2023/10/10 12:18:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

void	ft_putstr(char *s)
{
	unsigned int	counter;
	
	counter = 0;
	if (s != 0)
	*counter += write (1, s, ft_strlen(s));
}
