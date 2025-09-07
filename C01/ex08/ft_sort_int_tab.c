/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:46:10 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 09:46:11 by fdcurot          ###   ####lausanne.ch   */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		i++;
		if (tab[i] < tab[i - 1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i = 0;
		}
	}
}

/*int    main(void)
{
    int    *tab[] = {1,2,3};
    int    size;

    
    size = 4;
    ft_rev_int_tab(tab, size);
}*/
