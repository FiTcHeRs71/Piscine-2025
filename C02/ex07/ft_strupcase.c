/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:27:43 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:15:03 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c >= 'a' && c <= 'z')
		{
			str[a] = (c - 32);
		}
		a++;
	}
	return (str);
}
/*int	main()
{
	int	i;
	char tab[27] = "abcdefghijklmnopqrstuvwxyz";
	
	ft_strlowcase(tab);
	
	write(1, tab, 27);
	
}*/