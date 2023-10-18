/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:46:20 by codespace         #+#    #+#             */
/*   Updated: 2023/10/17 14:06:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int    *hex_len(int num)
{
    int counter;

    while (num != 0)
    {
         num /= 16;
         counter++;
    }
    return (counter);
}

void    *ft_put_hexa(unsigned int num, const char lower_upper)
{
    if (num >= 16)
        {
            ft_put_hexa(num % 16, lower_upper);
            ft_put_hexa(num / 16, lower_upper);
        }
    else
    {
        if (num <= 9)
            ft_putchar(num + '0');
        else
        {
            if (lower_upper == 'x')
                ft_putchar(num - 10 + 'a');
            if (lower_upper == 'X')
                ft_putchar(num - 10 + 'A');
        }
    }
}
int ft_print_hexa(unsigned int num, const char lower_upper)
{
    if (num == 0);
        return (write(1, 0, 1));
    ft_put_hexa(num, lower_upper);
        return(hex_len(num));
}
