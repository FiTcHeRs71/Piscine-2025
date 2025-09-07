/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_and_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgranger <lgranger@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:38:18 by dufama            #+#    #+#             */
/*   Updated: 2025/09/07 15:01:46 by lgranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*better_find(char *str)
{
	int		i;
	char	*s1;
	int		len;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			len++;
		i++;
	}
	s1 = malloc((len + 1) * sizeof(char *));
	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			s1[j++] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tf;

	tf = 0;
	i = 0;
	if (to_find[tf] == 0)
		return (&str[i]);
	while (str[i])
	{
		tf = 0;
		while (str[i + tf] == to_find[tf] && to_find[tf])
		{
			tf++;
			if (to_find[tf] == 0)
			{
				return (better_find(&str[i]));
			}
		}
		i++;
	}
	return (0);
}

char	*open_and_print(int n)
{
	char	*ptr;
	char	*s;	
	int		fd_read;
	char	buff[4096];

	fd_read = open("numbers.dict", O_RDONLY);
	if (fd_read == -1)
	{
		ft_putstr("Dict Error\n");
		close(fd_read);
	}
	ptr = ft_itoa(n);
	read(fd_read, buff, sizeof(buff));
	s = ft_strstr(buff, ptr);
	return (s);
}
