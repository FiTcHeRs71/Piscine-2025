/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:31:00 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/04 10:31:02 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
//#include <stdlib.h>
//#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	ngps;
	int	r;

	i = 0;
	ngps = 1;
	r = 0;
	if (!str)
	{
		return (0);
	}
	while ((str[i] >= 9 && str[i]<= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			ngps = -1;

		}
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	r = r * ngps;
	return(r);
}

/*int main ()
{
	int	i;
	int	r;
	char *str = "       -+12211t11";
	i = atoi(str);
	r = ft_atoi(str);
	printf("%d\n", i);
	printf("%d\n", r);
}

// white space
// + et -
// jusqua premiere lettre
//return un int*/