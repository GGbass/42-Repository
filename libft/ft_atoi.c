/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:54:47 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/28 11:54:50 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdlib.h>
#include <stdio.h>*/

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i] == '-' || (str[i] == '+'))
	{
		if (str[i] == '-')
				negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			result = (str[i] - '0') + (result * 10);
			i++;
	}
	return (result * negative);
}

/*int	main()
{
	char	cadena[] = "123456";
	int		result;

	result = ft_atoi(cadena);
	printf("La cadena convertida en intageer es %d\n:", result);
	return (0);
}*/
