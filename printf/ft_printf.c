/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:44 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/31 20:52:58 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static ft_printf_aux()
{
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_aux();
			i++;
		}
		else
		{
			ft_putchar()
		}
	}
	va_end(args);
	return (args);
}

int	main(void)
{
	ft_printf("Hola Mundo");
	return (0);
}
