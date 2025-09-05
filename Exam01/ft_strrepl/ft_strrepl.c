/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:19:22 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/04 10:19:24 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrepl(char *str, char c1, char c2)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
		{
			str[i] = c2;
		}
		i++;
	}	
	return(str);
}
