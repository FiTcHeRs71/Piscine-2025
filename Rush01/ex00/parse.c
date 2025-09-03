/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilai <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:39:51 by leilai            #+#    #+#             */
/*   Updated: 2025/08/31 20:23:54 by leilai           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

// to parse the command line inputs
// for example:  "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
// to: top[4] = {4, 3, 2, 1}; bottom[4] = {1, 2, 2, 2}; ...

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_puzzle
{
	int	**grid;
	int	s;
	int	*top;
	int	*bottom;
	int	*left;
	int	*right;
}	puzzle;

int	parse(char *str, puzzle *p)
{
	int	count;
	char	*tmp;
	int	i;
	int	v;

	count = 0;
	tmp = str;
	while (*tmp)
	{
		if (*tmp >= '1' && *tmp <= '9')
			count++;
		else if (*tmp != ' ')
			return (0);
		tmp++;
	}
	if (count % 4 != 0 || count == 0)
		return (0);
	p->s = count / 4;
	p->top = malloc(sizeof(int) * (p->s));
	p->bottom = malloc(sizeof(int) * (p->s));
	p->left = malloc(sizeof(int) * (p->s));
	p->right = malloc(sizeof(int) * (p->s));
	if (!p->top || !p->bottom || !p->left || !p->right)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= (p->s + '0'))
		{
			v = *str - '0';
			if (i < p->s)
				(p->top)[i] = v;
			else if (i < 2 * (p->s))
				(p->bottom )[i - (p->s)] = v;
			else if (i < 3 * (p->s))
				(p->left)[i - 2 * (p->s)] = v;
			else
				(p->right)[i - 3 * (p->s)] = v;
			i++;
		}
		str++;
	}
	return (i == 4 * (p->s));
}
