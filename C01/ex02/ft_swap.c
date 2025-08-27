/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@42lausanne.ch>             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:14:36 by fducrot           #+#    #+#             */
/*   Updated: 2025/08/21 09:07:29 by fducrot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int	maman;
	int	papa;

	maman = 'a';
	papa = 'b';

	write(1, &maman, 1);
	write(1, &papa, 1);

	ft_swap(&maman, &papa);

	write(1, &maman, 1);
       	write(1, &papa, 1);
	return (0);
}*/
