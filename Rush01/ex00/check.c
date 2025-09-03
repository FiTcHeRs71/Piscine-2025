/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:32:19 by leilai            #+#    #+#             */
/*   Updated: 2025/08/31 20:25:11 by leilai           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

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

// boolean function to flag if there are duplicates of n in the row
int	dup_row(puzzle *p, int row, int n)
{
	int	i;

	i = 0;
	while (i < p->s)
	{
		if (p->grid[row][i] == n)
			return (1);
		i++;
	}
	return (0);
}

// boolean to flag for dups in col
int	dup_col(puzzle *p, int col, int n)
{
	int	i;

	i = 0;
	while (i < p->s)
	{
		if (p->grid[i][col] == n)
			return (1);
		i++;
	}
	return (0);
}

// function return the current visibility: count

static int	vis_left(int *row, int s)
{
	int	i;
	int	count;
	int	max;

	i = 0;
	count = 0;
	max = 0;
	while (i < s)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i++;
	}
	return (count);
}

static int	vis_right(int *row, int s)
{
	int	i;
	int	count;
	int	max;

	i = s - 1;
	count = 0;
	max = 0;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			count++;
		}
		i--;
	}
	return (count);
}

// if row is full check if vis comply with left and right
int	check_row(puzzle *p, int row, int *left, int *right)
{
	int	i;

	i = 0;
	while (i < p->s)
	{
		if (p->grid[row][i] == 0)
			return (1);
		i++;
	}
	if ((vis_left(p->grid[row], p->s) != p->left[row])
		|| (vis_right(p->grid[row], p->s) != p->right[row]))
		return (0);
	return (1);
}

// unfinished
int	check_col(puzzle *p, int col)
{
	int	*tmp;
	int	i;
	int	full;

	tmp = malloc(sizeof(int) * p->s);
	if (!tmp)
		return (0);
	i = 0;
	full = 1;
	while (i < p->s)
	{
		tmp[i] = p->grid[i][col];
		if (tmp[i] == 0)
			full = 0;
		i++;
	}
	if (!full)
	{
		free (tmp);
		return (1);
	}
	if ((vis_left(tmp, p->s) != p->top[col]) || (vis_right(tmp, p->s) != p->bottom[col]))
	{
		free(tmp);
		return (0);
	}
	free (tmp);
	return (1);
}
