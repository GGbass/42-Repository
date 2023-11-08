/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:53:36 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/10 10:01:16 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_counter(long int n)
{
	int	count;
	int	sign;

	count = 1;
	sign = 0;
	if (n < 0)
	{
		sign += 1;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count + sign);
}

int	main()
{
	long int	n = '03';
	long int	result;
	result = ft_counter(n);
	printf("Result of counter is : %ld", result);
	return (0);
}
