/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:35:29 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/01 19:11:11 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_swap(char *str1, char *str2)
{
	char *temp;
	
	if(str1 > str2)
	{
		temp = str1;
		str1 = str2;
		str2 = temp;
	}
	return(str1, str2);
}

char	*ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	return(*str1 - *str2);
}

int	main (int argc, char **argv)
{
	(void)argc;
	int	j;
	int	i;

	j = 1;
	i = 2;
	while(argv[j] != 0 || argv[i] != 0)
	{
		ft_strcmp(argv[j], argv[i]);
		j++;
		i++;
	}
}
