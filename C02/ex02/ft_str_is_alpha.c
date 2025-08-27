/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 14:38:28 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/25 18:17:44 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main()
{
	char	retour;

	char tab[6] = "abcac";

	ft_str_is_alpha(tab);
	retour = ft_str_is_alpha(tab);

	write(1,&retour,1);
}*/
