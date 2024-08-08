/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 01:22:07 by gongarci          #+#    #+#             */
/*   Updated: 2024/02/25 01:22:07 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*substr;
	int	i;

	i = 0;
	if (!src)
		return(NULL);
	substr = malloc(sizeof(src) * sizeof(char) + 1);
	while(src != '\0')
	{
		substr[i] = src[i];
		i++;
	}
	return (substr);
}