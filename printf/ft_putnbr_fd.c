/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:57:09 by marvin            #+#    #+#             */
/*   Updated: 2023/11/05 17:57:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_fd(int number, int fd)
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
		ft_putchar('-', fd);
	}
	if (number > 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	if (number < 10 && number > -1)
	{
		c_nbr = number + '0';
		ft_putchar(c_nbr, fd);
	}

}