/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:29:38 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 23:50:40 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
void ft_putnbr_base(int nbr, char *base);

int print_int(va_list arg_ptr);
int print_char(va_list arg_ptr);
int print_str(va_list arg_ptr);
int print_x(va_list arg_ptr, char x_type);
int print_i(va_list arg_ptr);
#endif