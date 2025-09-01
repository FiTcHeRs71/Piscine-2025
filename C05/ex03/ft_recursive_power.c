/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:16:41 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/01 13:00:23 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power (nb, power -1));
	}
}
/*int	main()
{
	int	nb;
	int	power;
	int	r;

	nb = 5;
	power = 3;

	r = ft_recursive_power(nb, power);
	return(0);
}*/