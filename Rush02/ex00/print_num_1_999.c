/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_1_999.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:36:07 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 14:36:09 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	return (str);
}

void	print_num_1_19(long long int n)
{
	if (n < 20 && n != 0)
	{
		ft_putstr(open_and_print(n));
	}
}

void	print_num_1_99(long long int n)
{
	int	d;
	int	u;

	d = 0;
	u = 0;
	if (n < 20)
	{
		print_num_1_19(n);
	}
	if (n < 100)
	{
		d = n / 10;
		u = n % 10;
		d *= 10;
	}
	if (d != 0)
	{
		ft_putstr(open_and_print(d));
	}
	if (u != 0)
	{
		write(1, "-", 1);
		print_num_1_19(u);
	}
}

void	print_num_1_999(long long int n)
{
	if (n < 20)
		print_num_1_19(n);
	if (n < 100)
		print_num_1_99(n);
	if (n < 1000 && n != 0)
	{
		print_num_1_19(n / 100);
		write(1, " ", 1);
		ft_putstr(open_and_print(100));
		write(1, " ", 1);
		print_num_1_99(n % 100);
	}
}
