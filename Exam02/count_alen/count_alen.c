/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:52:09 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/10 13:52:11 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count_alen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] == 'a')
		{
			return(i);
		}
		i++;
	}
	return(i);
}
