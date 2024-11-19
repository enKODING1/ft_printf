/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_addr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:13:01 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 13:18:50 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

static uintptr_t    get_addr(va_list arg_ptr)
{
    return va_arg(arg_ptr, uintptr_t);
}

int print_addr(va_list arg_ptr)
{
    ft_putstr_fd("0x", 1);
    ft_putnbr_addr_base(get_addr(arg_ptr), "0123456789abcdef");
    return 1;
}