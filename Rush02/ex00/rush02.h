/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:11:51 by fdcurot           #+#    #+#             */
/*   Updated: 2025/09/07 14:41:31 by dufama           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*better_find(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*open_and_print(int n);
int		ft_strlen( char *s);
char	*ft_strrev(char *str);
char	*ft_itoa(int nbr);
char	*ft_putstr(char *str);
void	print_num_1_19(long long int n);
void	print_num_1_99(long long int n);
void	print_num_1_999(long long int n);
void	print_num_1_999999(long long int n);
void	print_num_1_999m(long long int n);
void	print_all(long long int n);
int		ft_atoi(char *str);

#endif
