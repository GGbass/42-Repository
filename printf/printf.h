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

#ifdef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c);

#endif