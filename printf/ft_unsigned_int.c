/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgined_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:37:04 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 14:37:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_unsigned_int(unsigned int number, int fd)
{
	if (number >= 10)
		ft_unsigned_int(number / 10, fd);
	ft_putchar(number % 10 + '0', fd);
}