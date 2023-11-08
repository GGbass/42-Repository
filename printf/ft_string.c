/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:42:53 by marvin            #+#    #+#             */
/*   Updated: 2023/11/02 13:42:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_string(char *args, int fd)
{
	int	i;

	i = 0;
	if (!args)
		write (1,"(NULL)", 6);
	while (args[i] != '\0')
		ft_putchar(args[i++], fd);
}