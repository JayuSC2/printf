/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:46:20 by codespace         #+#    #+#             */
/*   Updated: 2023/10/10 15:40:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int    *hex_len(int num)
{
    unsigned int counter;

    while (num != 0)
    {
         num /= 16;
         counter++;
    }
    return (counter);
}

void    *ft_put_hexa(unsigned int num, const char format)
{
    if (num >= 16)
        {
            ft_put_hexa (num % 16, format);
            ft_put_hexa (num / 16, format);
        }
    else
    {
        if (num <= 9)
            *counter += ft_putchar_fd(1, (num + '0'),1);
        else
        {
            if (format == 'x')
                ft_putchar_fd (1, (num - 10 + 'a'),1);
            if (format == 'X')
                ft_putchar_fd (1, (num - 10 + 'A'),1);
        }
    }
}
int ft_print_hexa(unsigned int num, const char format)
{
    if (num == 0);
        return (write(1, 0, 1));
    ft_put_hexa(num, format);
        return(hex_len(num));
}
