/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:30:52 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/03 10:30:55 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h> 
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	substr = ft_calloc(len + 1, 1);
	if (substr == NULL)
		return (NULL);
	while (i < len && ((int)start < ft_strlen(str)))
	{
		substr[i++] = str[start++];
	}
	return (substr);
}

/*int	main()
{
	char	*cadena = "Hola Milica";
	char	*substr;
	
	substr = ft_substr(cadena, 5, 4);
	printf("%s\n", substr);
	free(substr);
	return (0);
}*/