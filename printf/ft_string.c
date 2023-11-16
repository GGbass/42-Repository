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

static	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_string(char *args, int *len)
{
	int	i;

	i = 0;
	if (!args)
	{
		write (1, "(null)", 6);
		*len = *len + 6;
		return ;
	}
	i = write(1, args, ft_strlen(args));
	*len = *len + ft_strlen(args);
}

	/*while (args[i] != '\0')
		ft_putchar(args[i++], len);*/