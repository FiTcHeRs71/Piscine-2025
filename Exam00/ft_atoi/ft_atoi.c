/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:44:43 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 17:44:44 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	ngps;

	i = 0;
	ngps = 1;
	c = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			ngps *= - 1;
		}
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		return (0);
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		c = (c * 10) + (str[i] - 48);
		i++;
	}
	c = c * ngps;
	return(c);
}
