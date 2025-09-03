/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:19:02 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/31 20:02:45 by leilai           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_puzzle
{
	int	**grid;
	int	s;
	int	*top;
	int	*bottom;
	int	*left;
	int	*right;
}	puzzle;

int	parse(char *str, puzzle *p);
int	solve(puzzle *p, int row, int col);
void	print(int **grid, int s);

int	main(int ac, char **av)
{
	int	i;
	int	j;
	puzzle	p;

	if (ac != 2 || !parse(av[1], &p))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	p.grid = malloc(sizeof(int *) * p.s); // first allocate mem for row pointer
	while (i < p.s)
	{
		p.grid[i] = malloc(sizeof(int) * p.s);// then each row is array of ints
		j = 0;
		while (j < p.s)
		{
			p.grid[i][j] = 0;// to avoid garbage value, calloc initialize malloc don't
			j++;
		}
		i++;
	}
	if (solve(&p, 0, 0))
		print(p.grid, p.s);
	else
		write(1, "Error\n", 6);

	// free step by step
	free(p.top);
	free(p.bottom);
	free(p.left);
	free(p.right);
	i = 0;
	while (i < p.s)
		free(p.grid[i++]);
	free(p.grid);
	return (0);
}

// parced input values
// grid malloc
// Error handling
// solve
// print
