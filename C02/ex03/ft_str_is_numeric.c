/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 08:34:04 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:18:06 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c < '0' || c > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int	main()
{
	char	retour;
	
	char tab[6] = "12345";
	ft_str_is_numeric(tab);
	
	retour = ft_str_is_numeric(tab);

	write (1, &retour, 1);	
}*/
