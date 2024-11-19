/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_addr_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:22:43 by skang             #+#    #+#             */
/*   Updated: 2024/11/19 15:11:08 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"
#include <unistd.h>

static int	is_valid(char *str)
{
	size_t	len;
	int		i;
	int		j;
	char	c;

	len = ft_strlen(str);
	if (len == 0 || len == 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		j = 0;
		while (str[j] != '\0')
		{
			if (j != i && str[j] == c)
				return (0);
			if ((str[j] == '-' || str[j] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	ft_recursion(uintptr_t n, char *base, size_t len)
{
	uintptr_t	mod;

	mod = n % len;
	if (n >= len)
	{
		ft_recursion(n / len, base, len);
		write(1, &base[mod], 1);
		return ;
	}
	write(1, &base[mod], 1);
}

void	ft_putnbr_addr_base(uintptr_t nbr, char *base)
{
	int		len;
	size_t	num;

	len = ft_strlen(base);
	if (!is_valid(base))
		return ;
	num = nbr;
	ft_recursion(num, base, len);
	return ;
}
