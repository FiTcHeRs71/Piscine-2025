/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:35:44 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/03 17:35:46 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	char	*tab;
	void(sep);

	i = 1;
	k = 0;
	tab = malloc(sizeof(char *) * size);
	while(*strs[i] != 0)
	{
		j = 0;
		while (strs[j] != '\0')
		{
			tab[k] = strs[j];
			k++;
			j++;
		}
		i++;
	}
	tab[k] = '\0';
	return(tab);
}
//size combien de strings a comcat
// **strs la ou sont les string
//  sep  = separation entre les strings