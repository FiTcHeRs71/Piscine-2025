/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:05:16 by fducrot           #+#    #+#             */
/*   Updated: 2025/08/20 10:48:05 by fducrot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b +1;
			while (c <= '9')
			{
				(write (1, &a, 1), write (1, &b, 1), write (1, &c, 1));
				c++;
				if (a != '7')
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}

/*int main()
{
ft_print_comb();
return(0);
}*/
