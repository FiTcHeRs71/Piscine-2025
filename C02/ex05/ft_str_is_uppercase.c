/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:44:17 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:13:04 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (*(str + a) != '\0')
	{
		c = *(str + a);
		if (c < 'A' || c > 'Z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*int	main()
{
	int retour;
	char tab[5] = "ABCDE";

	ft_str_is_uppercase(tab);
	retour = ft_str_is_uppercase(tab);
	
	write(1, &retour, 1);
}*/