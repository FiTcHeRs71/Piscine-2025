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

int	ft_total_size(char **strs, int size)
{
	int	i;

	while(strs[i] > size)
	{
		i++;
	}
	return(i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	char	*tab;
	void(sep);

	i = 1;
	k = 0;
	ft_size_total();
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
//size combien de strings a concat
// **strs la ou sont les string
//  sep  = separation entre les strings

int	main()
{
	int	size;
	char	
}