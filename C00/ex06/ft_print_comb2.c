/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:26:26 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/06 09:26:28 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int long	c;
	int long	n;

	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	b = 00;
	while (b <= 99)
	{
		a = b + 1;
		while (a <= 99)
		{
			if (b <= 9)
				write(1, "0", 1);
			ft_putnbr(b);
			write(1, " ", 1);
			if (a <= 9)
				write(1, "0", 1);
			ft_putnbr(a);
			if (b < 98)
				write(1, ", ", 2);
			a++;
		}
		b++;
	}
}
/* int	main(void)
{
	ft_print_comb2();
	return (0);
} */