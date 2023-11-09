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

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <math.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c, int fd);
void	ft_string(char *args, int fd);
void	ft_putnbr_fd(int number, int fd);
void	ft_unsigned_int(unsigned int number, int fd);
void	ft_puthexa(unsigned long int number, int fd, char c);
void	ft_putmem(size_t n, int fd);

#endif