/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:22:16 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/10 16:22:18 by fdcurot          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_count(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count = 1;
		return (count);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*str;
	int	i;
	long 	int	n;
	int	max;

	i = 0;
	n = nbr;
	len = ft_count(nbr);
	max = len;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
	{
		return (0);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i++;
	}
	while (len > i)
	{
		len--;
		str[len] = (n % 10) + 48;
		n /= 10;
	
	}
	str[max] = '\0';
	return(str);
}

/* int	main(void)
{
	char	*str;
	int	i;

	i = 0;
	str = ft_itoa(-2147483648);

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

} */