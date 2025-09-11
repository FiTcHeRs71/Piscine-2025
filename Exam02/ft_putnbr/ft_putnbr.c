/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:55:54 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/10 13:55:55 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	long int	r;

	n = nb;
	r = 0;
	if( nb < 0)
	{
		write(1, "-", 1);
		n *= -1 ;
	}
	if (n > 9)
	{
		ft_putnbr (n / 10);
	}
	r = (n % 10) + 48;
	write(1, &r, 1);
}

