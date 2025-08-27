/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:45:27 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 17:15:51 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (*(src + a) != '\0' && a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}

/*int main ()
{
	char     *ptrsrc;
	char     *ptrdest;
	int b;
	char    tab [20]= "KCORP ON FIRE";

	char    tab2[15];

	ptrsrc = tab;
	ptrdest = tab2;

	b = 0;
	ft_strncpy (tab2, tab, 15);

	while(tab[b] != '\0')
	{
		write(1, &tab[b], 1);
		b++;
	}
	write(1, "\n", 1);
	b = 0;
	while(tab2[b] >= 15)
	{
		write(1, &tab2[b], 1);
		b++;
	}
	write(1, "\n", 1);
}*/
