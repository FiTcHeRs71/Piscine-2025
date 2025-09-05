/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:10:11 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/04 18:10:12 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	//write(1, " ", 1);
	write(1,"\n", 1);
}

void	ft_capitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while(str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z') && (flag == 0))
		{
			str[i] +=32;
		}
		if((str[i] >= 'a' && str[i] <= 'z') && (flag == 1))
		{
			str[i] -= 32;
		}
		if((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	(void)argc;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[i])
	{
		ft_capitalize(argv[i]);
		i++;
	}
	i =1;
	while(argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}
