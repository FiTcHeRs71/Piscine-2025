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
#include <stdlib.h>

int	strycat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (src == 0)
	{
		return (0);
	}
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	j = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (sep[j])
	{
		j++;
	}
	total = total + j;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 1;
	len = ft_total_size(size, strs, sep);
	str = malloc(sizeof(char) * len + 1);
	str[i] = '\0';
	if (size < 1)
		return (str);
	while (i < size)
	{
		if (strs[i] != NULL)
			strycat(str, strs[i]);
		if (j < size)
		{
			strycat(str, sep);
			j++;
		}
		i++;
	}
	return (str);
}

int     main(void)
{
	char	**strs  = (char*[]){""};
	char	sep[] = "-";
	int	size;
	char	*m;
	int i;

	i = 1;
	size = 2;

	m = ft_strjoin(size, strs, sep);
	while(m[i])
	{
		write(1, &m[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
//size combien de strings a concat
// **strs la ou sont les string
//  sep  = separation entre les strings*/