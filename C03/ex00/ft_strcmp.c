/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:29:06 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/27 11:12:17 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int	main()
{
	char	*str1;
	char	*str2;
	int	r;

	str1 = "BONJOUR";
	str2 = "BONJOUZ";

	ft_strcmp(str1, str2);
	r = ft_strcmp(str1, str2);
	
	
	printf("%d", r); // renvoie - 8 car R est avant Z dans ASCII
	
	return (0);
}*/
// S'arrete a la premiere lettre qui chnage entre les 2 string
// renvoie 0 si les deux strings sont identiques
// renvoie -(x) si les charactere est avant dans la table ASCII
// renvoie +(x) si les charactere est apres dans la table ASCII