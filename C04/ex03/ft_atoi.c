/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:21:27 by fdcurot           #+#    #+#             */
/*   Updated: 2025/08/27 19:19:20 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_atoi(char *str)
{
	int	i;
	int	v;
	int	ngps;

	i = 0;
	v = 0;
	ngps = 1;;

		while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
		}
		while(str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
			{
				ngps *= -1;
			}
			i++;
		}
		while(str[i] <= '9' && str[i] >= '0')
		{
			v = (v * 10) + (str[i] - '0');
			i++;
		}
		v *= ngps;
		return (v);
}
/*int	main()
{
	char	*a = "     ---+--+-1234ac56)";
	int	retour;
	
	ft_atoi(a);
	retour = ft_atoi(a);




	return (0);

}*/