/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:49:38 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 13:39:22 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

static int	get_i(va_list arg_ptr)
{
	return (va_arg(arg_ptr, int));
}

int	print_i(va_list arg_ptr)
{
	ft_putnbr_base(get_i(arg_ptr), "0123456789");
	return (1);
}
