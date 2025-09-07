/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:54:37 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 14:55:45 by dufama           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c < '0' || c > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else if (ft_str_is_numeric(argv[1]))
	{
		i = ft_atoi(argv[1]);
		print_all(i);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
}
