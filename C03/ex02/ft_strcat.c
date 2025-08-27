/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:34:43 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/27 11:11:28 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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
	dest [i] = '\0';
	return (dest);
}
/*int	main()
{
	char	*str1;
	char	*str2;
	char	r;

	str1 = "KCORP ";
	str2 = "ON FIRE !!";
	
	r = *ft_strcat(str1, str2);
	printf("%d", r);
	
}*/