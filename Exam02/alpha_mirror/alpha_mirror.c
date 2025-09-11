/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:43:16 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/10 15:43:19 by fdcurot          ###   ####lausanne.ch   */
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
}

char	*ft_alphamirror(char *str)
{
	int	i;
	char	c;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			c = 97 - str[i];
			str[i] = c + 122;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			c = 65 - str[i];
			str[i] = c + 90;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_alphamirror(argv[1]);
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
