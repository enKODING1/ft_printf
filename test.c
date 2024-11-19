/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:34:45 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 16:48:41 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "include/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("c test\n");
	printf("original: [%c]\n", 'A');
	ft_printf("made    : [%c]\n", 'A');
	printf("===============\n");
	printf("s test\n");
	printf("original: [%s]\n", "hellow");
	ft_printf("made    : [%s]\n", "hellow");
	printf("===============\n");
	printf("p test\n");
	printf("original: [%p]\n", "A");
	ft_printf("made    : [%p]\n", "A");
	printf("===============\n");
	printf("d test\n");
	printf("original: [%d]\n", 424242);
	ft_printf("made    : [%d]\n", 424242);
	printf("original: [%d]\n", 0xA32);
	ft_printf("made    : [%d]\n", 0xA32);
	printf("===============\n");
	printf("i test case 2\n");
	printf("original: [%i]\n", 424242);
	ft_printf("made   : [%i]\n", 424242);
	printf("original: [%i]\n", 0xA1);
	ft_printf("made	   : [%i]\n", 0xA1);
	printf("===============\n");
	printf("u test\n");
	printf("original: [%u]\n", 424242);
	ft_printf("made    : [%u]\n", 424242);
	printf("===============\n");
	printf("x test\n");
	printf("original: [%x]\n", 42424242);
	ft_printf("made    : [%x]\n", 42424242);
	printf("===============\n");
	printf("X test\n");
	printf("original: [%X]\n", 42424242);
	ft_printf("made    : [%X]\n", 42424242);
	printf("===============\n");
	printf("percent test\n");
	printf("original: [%%]\n");
	ft_printf("made    : [%%]\n");
	printf("===============\n");
	return (0);
}
