/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:01:56 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:16:40 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	c;
	int	suiv;

	a = 0;
	suiv = 1;
	while (str[a] != '\0')
	{
		c = str[a];
		if (suiv == 1 && c >= 'a' && c <= 'z')
		{
			str[a] = (c - 32);
		}
		else if (suiv == 0 && c >= 'A' && c <= 'Z')
		{
			str[a] = (c + 32);
		}
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			suiv = 1;
		else
			suiv = 0;
		a++;
	}
	return (str);
}
