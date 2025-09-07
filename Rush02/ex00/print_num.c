/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgranger <lgranger@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:39:04 by dufama            #+#    #+#             */
/*   Updated: 2025/09/07 15:05:24 by lgranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_num_1_999999(long long int n)
{
	if (n < 20)
		print_num_1_19(n);
	else if (n < 100)
		print_num_1_99(n);
	else if (n < 1000)
		print_num_1_999(n);
	else if (n < 1000000)
	{
		print_num_1_999999(n / 1000);
		write(1, " ", 1);
		ft_putstr(open_and_print(1000));
		write(1, " ", 1);
		print_num_1_999999(n % 1000);
	}
}

void	print_num_1_999m(long long int n)
{
	if (n < 20)
		print_num_1_19(n);
	else if (n < 100)
		print_num_1_99(n);
	else if (n < 1000)
		print_num_1_999(n);
	else if (n < 1000000)
		print_num_1_999999(n);
	else if (n < 1000000000)
	{
		print_num_1_999m(n / 1000000);
		write(1, " ", 1);
		ft_putstr(open_and_print(1000000));
		write(1, " ", 1);
		print_num_1_999m(n % 1000000);
	}
}

void	print_all(long long int n)
{
	if (n < 20)
		print_num_1_19(n);
	else if (n < 100)
		print_num_1_99(n);
	else if (n < 1000)
		print_num_1_999(n);
	else if (n < 1000000)
		print_num_1_999999(n);
	else if (n < 1000000000)
		print_num_1_999m(n);
	else if (n < 1000000000000)
	{
		print_all(n / 1000000000);
		write(1, " ", 1);
		ft_putstr(open_and_print(1000000000));
		write(1, " ", 1);
		print_num_1_999m(n % 1000000000);
	}
}
