/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:32:47 by skang             #+#    #+#             */
/*   Updated: 2024/11/18 14:15:07 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
 
void vout(int foobar, int min, int max, ...);

int main(void)
{
   vout(1, 2, 1, "hello", "world", "hi");
   return 0;
}

void vout(int foobar, int min, int max, ...)
{
   va_list arg_ptr;
   // va_list args_copy;
   int   args;
   char *day;
   int num = 19;
   va_start(arg_ptr, max);
   printf("1: [%p], 2: [%p], 3: [%p] \n", &foobar, &min, &max);
   // va_copy(args_copy, arg_ptr);
   args = 0;
   while(args < max)
   {
      day = va_arg(arg_ptr, char *);
      printf("Day: %s\n", day);
      args++;
   }
   
   // va_end(arg_ptr);
   // day = va_arg(arg_ptr, char *);
   // printf("Day: %s\n", day);
   // day = va_arg(arg_ptr, char *);
   //va_end(arg_ptr);
   //printf("Day: %s\n", day);
   
   // args = 0;
   // while(args < max)
   // {
   //    day = va_arg(arg_ptr, char *);
   //    printf("Day: %s\n", day);
   //    args++;
   // }
   // va_end(arg_ptr);
}

// 가변이자 함수 기능 추론
// va_start => 가변인자로들어온 값들을 arg_ptr 리스트에 담아줌 (void *)
// va_copy => start에서 담긴 va_list 들을 새로운 메모리에 복사해줌
// va_arg => 첫번째 인자로 들어온 va_list 타입의 변수의 리스트들을 순서대로 leftpop 해줌, 타입 선택
// va_end => pop이 끝난 va_list타입의 변수를 메모리에서 제거함