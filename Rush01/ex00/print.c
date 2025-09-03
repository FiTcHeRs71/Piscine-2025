/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilai <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 12:22:38 by leilai            #+#    #+#             */
/*   Updated: 2025/08/31 18:44:20 by leilai           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int **grid, int s)
{
	int		r;
	int		c;
	char	ch;

	r = 0;
	while (r < s)
	{
		c = 0;
		while (c < s)
		{
			ch = grid[r][c] + '0';
			write(1, &ch, 1);
			if (c < s - 1)
				write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
