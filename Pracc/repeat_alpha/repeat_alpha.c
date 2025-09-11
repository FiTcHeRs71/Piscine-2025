/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:41:16 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/05 12:41:19 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(char c)
{
	int repeat;

	if( c >= 'a' && c <= 'z')
	{
		repeat = (c - 'a') + 1;
	}
	if( c >= 'A' && c <= 'Z')
	{
		repeat = (c - 'A') + 1;
	}	
	return (repeat);
}

int	main(int argc, char **argv)
{
	int repeat;

	if(argc < 2 || argc > 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while(*argv[1])
	{
		repeat = ft_print(*argv[1]);
		while(repeat > 0)
		{
			write(1, argv[1], 1);
			repeat--;
		}
		argv[1]++;
	}
	write(1,"\n",1);
}
