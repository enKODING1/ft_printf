/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:34:48 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 14:38:46 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
   va_list arg_ptr;
   char *arg;
   va_start(arg_ptr, format);
   arg = va_arg(arg_ptr, char *);
   printf("first: [%s] \n", format);
   printf("second: [%s] \n", arg);
   return 0;
}
