/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:34:48 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 20:54:08 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"


int valid_specifier(char specifier)
{
   char valid_specifier_array[9];
   int   index;

   ft_strlcpy(valid_specifier_array, "cspdiuxX%", 10);
   index = 0;
   while (valid_specifier_array[index] != '\0')
   {
         if (specifier == valid_specifier_array[index])
            return 1;
         index++;
   }
   return 0;
}

int  specifier_dispatcher(char specifier)
{
               
}

int ft_printf(const char *format, ...)
{
   va_list arg_ptr;
   int index;
   
   va_start(arg_ptr, format);
   index = 0;
   while (format[index] != '\0' || index < ft_strlen(format)) 
   {
      if (format[index] == '%' && valid_specifier(format[index + 1]))
      {

         index += 2;
         
         continue;
      }
      ft_putchar_fd(format[index], 1);
      index++;
   }
   return 0;
}
