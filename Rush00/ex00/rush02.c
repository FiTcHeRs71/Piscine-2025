/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:34:36 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/23 10:34:38 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char    ft_putchar(char c);


void ligne1(x, y)
{
int	z;

z = 1;
while ( x >= z || y >= z)

	{
		if (z == 1)
		{
			ft_putchar('A');
		}
	
	       while (z < (x-1))
	       {
			ft_putchar('B');
			z++;
	       }
	z++;
		if (z == x)
		{
			ft_putchar('A');
			z++;
		}
	}
	write(1, "\n", 1);
}

void ligne2(x, y)
{
int	z;

z = 1;
while ( x >= z || y >= z)
	{
		if (z == 1)
		{
			ft_putchar('B');
		}
	
	       while (z < (x-1))
	       {
			ft_putchar(' ');
			z++;
	       }
	z++;
		if (z == x)
		{
			ft_putchar('B');
			z++;
		}
	}
write(1, "\n", 1);
}

void ligne3(x, y)
{
int	z;

z = 1;
while ( x >= z || y >= z)
	{
		if (z == 1)
		{
			ft_putchar('C');
		}
	
	       while (z < (x-1))
	       {
			ft_putchar('B');
			z++;
	       }
	z++;
		if (z == x)
		{
			ft_putchar('C');
			z++;
		}
	}
}
void    rush(int x, int y)
{
    int    p;
    p = 1;
    if (x > 0 || y >0)
    {
        ligne1(x, y);
    }
    if (y > 0) 
    {
        while(p <= (y-2))
    {
        ligne2(x, y);
        p++;
    }
    }
    if (y > 1)
    {
        ligne3(x, y);
    }
}