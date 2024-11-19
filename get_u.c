/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:22:44 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 13:31:30 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

static unsigned int    get_u(va_list arg_ptr)
{
    return va_arg(arg_ptr, unsigned int);
}

int print_u(va_list arg_ptr)
{
    ft_putnbr_unsigned_base(get_u(arg_ptr), "0123456789");
    return 1;
}