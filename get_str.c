/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:08:09 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 13:39:48 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"

static char	*get_str(va_list arg_ptr)
{
	return (va_arg(arg_ptr, char *));
}

int	print_str(va_list arg_ptr)
{
	ft_putstr_fd(get_str(arg_ptr), 1);
	return (1);
}
