/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 09:25:35 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/27 11:10:20 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	*str1;
	char	*str2;
	int	n;
	int	r;
	
	n = 5;
	str1 = "zebi";
	str2 = "zebizeub";

	r = ft_strncmp(str1, str2, n); //affiche -97 car 
	rien est compare a  'z' et donc 0 -97 = -97

	printf("%d", r);
	
}*/

//// S'arrete a la premiere lettre qui chnage entre les 2 string
// renvoie 0 si les deux strings sont identiques
// renvoie -(x) si les charactere est avant dans la table ASCII
// renvoie +(x) si les charactere est apres dans la table ASCII
// n permet de cut la recherche avant la fin du tableau