/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:43:49 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 16:43:51 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*swap_cases(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -=32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] +=32;
		}
		i++;
	}
	return(str);
}
/* int	main(int argc, char **argv)
{
	swap_cases(argv[1]);
	(void)argc;
} */