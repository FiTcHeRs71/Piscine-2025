/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:33:03 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/10 14:33:05 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count(char	c)
{
	int count;
	count = 1;
	if(c >= 'a' && c <= 'z')
	{
		count = (c - 'a') + 1;
	}
	if(c >= 'A' && c <= 'Z')
	{
		count = (c - 'A') + 1;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		count = ft_count(str[i]);
		while (count > 0)
		{
			write(1, &str[i], 1);
			count--;
		}
	i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}