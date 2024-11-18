/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:01:53 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 23:06:43 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

char    get_char(va_list arg_ptr)
{
    return (char)va_arg(arg_ptr, int);
}

int print_char(va_list arg_ptr)
{
    ft_putchar_fd(get_char(arg_ptr), 1);
    return 1;
}