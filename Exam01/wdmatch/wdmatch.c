/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:52:58 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/04 14:52:59 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	ft_strcmp(char *ori, char *find)
{
	int	i;

	i = 0;
	while (ori[i] == find[i] && ori[i])
	{
		i++;
	}
	return(ori[i] - find [i]);
}*/

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}*/

int	main(int argc, char **argv)
{
	char	*phrase;
	char	*find;
	int	i;
	int	j;

	find = argv[1];
	phrase = argv[2];
	i = 0;
	j = 0;

	if (argc < 3 || argc > 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(phrase[i])
	{
		if (find[j] == phrase[i])
		{
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	if (find[j] == '\0')
	{
		ft_putstr(find);
	}
	write(1, "\n", 1);
}
