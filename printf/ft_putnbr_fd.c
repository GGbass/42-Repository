/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:40:51 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/13 17:40:51 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int number, int len)
{
	char	c_nbr;

	c_nbr = '0';
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		number = -number;
		ft_putchar('-', len);
	}
	if (number > 10)
	{
		ft_putnbr_fd(number / 10, len);
		ft_putnbr_fd(number % 10, len);
	}
	if (number < 10 && number > -1)
	{
		c_nbr = number + '0';
		ft_putchar(c_nbr, len);
	}
}
