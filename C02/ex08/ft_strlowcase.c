/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:52:03 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:15:50 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c >= 'A' && c <= 'Z')
		{
			str[a] = (c + 32);
		}
		a++;
	}
	return (str);
}
int	main()
{
	char tab[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	ft_strlowcase(tab);
	
	write(1, tab, 27);
	
}
