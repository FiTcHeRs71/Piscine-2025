/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:23:32 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/03 11:23:35 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	while( i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return(tab);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	//int	i;
	int	min;
	int	max;
	int	*tab;

	min = 0;
	max = 5;

	tab = ft_range(min, max);

	printf("%ls", tab);
}*/