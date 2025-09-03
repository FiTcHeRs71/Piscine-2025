/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:34:47 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/03 09:34:48 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}
char	*ft_strdup(char *src)
{
	char	*copy;
	int	i;

	i = 0;
	copy = malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (!copy)
	{
		return(NULL);
	}
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] ='\0';
	return(copy);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*src = "KCORP ON FIRE !!";
	char	*copy;

	copy = ft_strdup(src);
	printf("%s", copy);
}*/