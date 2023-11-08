/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:19:48 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 18:19:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthexa(unsigned long int number, int fd, char c)
{
	char	*hexa;
	char	str[10];
	int		i;

	i = 0;
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	hexa = "0123456789abcdef";
	if (number == 0)
	{
		ft_putchar('0', fd);
		return ;
	}
	while (number != 0)
	{
		str[i] = hexa[number % 16];
		number = number / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], fd);
}