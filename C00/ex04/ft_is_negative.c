/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:16:42 by fducrot           #+#    #+#             */
/*   Updated: 2025/08/20 09:24:58 by fducrot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n >= 0)
	{
		write (1, &b, 1);
	}
	if (n < 0)
	{
		write (1, &a, 1);
	}
}

/*int main()
{
    ft_is_negative(8);
    ft_is_negative(-5);
    ft_is_negative(0);
    return (0);
}*/
