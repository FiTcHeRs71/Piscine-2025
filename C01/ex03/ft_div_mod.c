/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@42lausanne.ch>             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:21:47 by fducrot           #+#    #+#             */
/*   Updated: 2025/08/21 17:37:18 by fducrot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*pt1;
	int	*pt2;

	a = 11;
	b = 3;

	*pt1 = &div;
	*pt2 = &mod;

	ft_div_mod(a, b, div, mod);
	return(0);
}*/
