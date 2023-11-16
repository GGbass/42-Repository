/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:29:41 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/31 20:29:42 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <math.h>
# include <limits.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c, int *len);
void	ft_string(char *args, int *len);
void	ft_putnbr(int number, int *len);
void	ft_unsigned_int(unsigned int number, int *len);
void	ft_puthexa(unsigned int number, char c, int *len);
void	ft_putmem(unsigned long long n, int *len);

#endif