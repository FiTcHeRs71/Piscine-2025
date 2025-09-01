/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:21:47 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/01 13:01:34 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	temp;

	temp = index;
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
	}
}
/*int	main()
{
	ft_fibonacci(0);
}*/