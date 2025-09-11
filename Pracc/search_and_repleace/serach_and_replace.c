/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serach_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:23:29 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/05 13:23:31 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap_letter(char *str, char *prev, char *next)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == *prev)
		{
			str[i] = *next;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{

	if(argc < 4 || argc > 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	ft_swap_letter(argv[1], argv[2], argv[3]);

	ft_putstr(argv[1]);
	return(0);
}
