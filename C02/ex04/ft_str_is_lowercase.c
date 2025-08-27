/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:09:51 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:12:31 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c < 'a' || c > 'z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*int main ()
{
	int	retour;
	char	tab[5] = "abcd";

	ft_str_is_lowercase(tab);
	retour = ft_str_is_lowercase(tab);
	
	write (1, &retour, 1);
}*/