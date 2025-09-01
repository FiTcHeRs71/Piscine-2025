/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:39:32 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/01 12:59:44 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	s;

	s = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		s = s * nb;
		power --;
	}
	return (s);
}
/*int	main()
{
	int	nb;
	int	power;
	int	r;

	nb = 2;
	power = 3;
	r = ft_iterative_power(nb, power);
}*/