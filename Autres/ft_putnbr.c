/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:02:51 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/09 18:02:54 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long int	n;
	long int 	c;

	n = nbr;
	c = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = ((n % 10) + 48);
	write(1, &c, 1);
}
int	main(void)
{
	ft_putnbr(-2147483648);
}
