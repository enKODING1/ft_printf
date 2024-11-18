/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:38:28 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 23:48:34 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

static int get_int(va_list arg_ptr)
{
    return va_arg(arg_ptr, int);
}

int print_int(va_list arg_ptr)
{
    ft_putnbr_fd(get_int(arg_ptr), 1);
    return 1;
}