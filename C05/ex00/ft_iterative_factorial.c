/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fducrot <fducrot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:51:26 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/01 12:57:02 by fducrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	s;

	i = 1;
	s = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i != nb)
	{
		s = s * (nb - i);
		i++;
	}
	return (s);
}

/*int    main()
{
    ft_iterative_factorial(5);

}
// Créez une fonction itérative qui renvoie un nombre. Ce nombre doit être le
//résultat d'une opération factorielle basée sur le paramètre donné.

//Si l'argument n'est pas valide, la fonction doit renvoyer 0.

// Les dépassements de capacité n'ont pas besoin d'être gérés ; 
//la valeur de retour de la fonction sera indéfinie
//dans de tels cas.*/
