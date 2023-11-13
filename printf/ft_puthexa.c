/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:03:27 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/09 22:03:27 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long int number, char c, int len)
{
	char	*hexa;
	char	str[10];
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (number == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (number != 0)
	{
		str[i] = hexa[number % 16];
		number = number / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}
