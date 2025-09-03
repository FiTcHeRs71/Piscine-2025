/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:35:29 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/02 15:34:08 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	j;
	int	r;

	j = 1;
	if (argc < 2)
		return (0);
	while (argv[j + 1] != 0)
	{
		r = ft_strcmp(argv[j], argv[j + 1]);
		if (r > 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			return (main(argc, argv));
		}
		j++;
	}
	j = 1;
	while (argv[j] != 0)
	{
		ft_putstr(argv[j]);
		j++;
	}
	return (0);
}
