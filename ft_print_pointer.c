/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:55:38 by codespace         #+#    #+#             */
/*   Updated: 2023/10/11 13:04:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int  *pointer_len(int num)
{
    unsigned int    counter;
    
    while (num != 0)
    {
        num /= 16;
        counter++;
    }
    return(counter);
}
int print_pointer(unsigned long address, int strlen)
{
    
}
