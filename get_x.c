/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:43:18 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 23:48:29 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

static int    get_x(va_list arg_ptr)
{
    return va_arg(arg_ptr, int);
}

int print_x(va_list arg_ptr, char x_type)
{
    if (x_type == 'x')
        ft_putnbr_base(get_x(arg_ptr), "0123456789abcdef");
    if (x_type == 'X')
        ft_putnbr_base(get_x(arg_ptr), "0123456789ABCDEF");
    return 1;
}