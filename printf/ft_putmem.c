/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:53:02 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/09 21:53:02 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putmem(size_t n, int len)
{
	char	*hexa;
	char	str[10];
	int		i;

	i = 0;
	hexa = "0123456789abcdef";
	write(1, "0x", 2);
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		str[i] = hexa[n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}
