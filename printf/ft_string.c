/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:42:02 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/13 17:42:02 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char *args, int len)
{
	int	i;

	i = 0;
	if (!args)
		write (1, "(NULL)", 6);
	while (args[i] != '\0')
		ft_putchar(args[i++], len);
}
