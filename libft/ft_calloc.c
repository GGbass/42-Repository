/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:57:36 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/28 13:57:37 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*point;
	size_t	b;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	point = malloc(b);
	if (point == NULL)
	{
		return (NULL);
	}
	ft_bzero(point, b);
	return (point);
}
