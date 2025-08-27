/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 07:49:46 by fducrot@stu       #+#    #+#             */
/*   Updated: 2025/08/25 11:14:40 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (*(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int main ()
{
	char     *ptrsrc;
	char     *ptrdest;
	int b;

	b = 0;

	char    tab[6];
	tab [0] = 'K';
	tab [1] = 'C';
	tab [2] = 'O';
	tab [3] = 'R';
	tab [4] = 'P';
	tab [5] = '\0';

	char    tab2[6];
	tab2 [0] = 'a';
	tab2 [1] = 'a';
	tab2 [2] = 'a';
	tab2 [3] = 'a';
	tab2 [4] = 'a';
	tab2 [5] = '\0';

	ptrsrc = tab;
	ptrdest = tab2;

	ft_strcpy (tab2, tab);

	while(tab[b] != '\0')
	{
		write(1, &tab[b], 1);
		b++;
	}
	write(1, "\n", 1);
	b = 0;
	while(tab2[b] != '\0')
	{
		write(1, &tab2[b], 1);
		b++;
	}
	write(1, "\n", 1);
}*/
