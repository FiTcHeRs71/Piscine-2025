/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:02:22 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/11 09:02:24 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp_mieux(char *str, char *stry, char c, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if(str[i] == c)
		{
			return (1);
		}
		i++;
	}
	while (j < n)
	{
		if(stry[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	ft_cmp(char c, char *str, int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		if(str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_check_argc_1(char *str, char *stry)
{
	int	r;
	int	j;

	j = 0;
	while(stry[j])
	{
		r = ft_cmp_mieux(str, stry, stry[j], j);
		if(r == 0)
		{
			write(1, &stry[j], 1);
		}
		j++;
	}
}

void	ft_check_argc(char *str)
{
	int	i;
	int	r;

	i = 0;
	while(str[i])
	{
		r = ft_cmp(str[i], str, i);
		if(r == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_check_argc(argv[1]);
	ft_check_argc_1(argv[1], argv[2]);
	write(1, "\n", 1);
	(void)argc;
}