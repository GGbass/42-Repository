/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:11:35 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/14 12:30:16 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (c < 0 || c > 127)
		return (NULL);
	return (0);
}
/*int main()
{
	const char	*cadena;
	char		search;
	char		*result;

	cadena = "Hola Gente";
	search = 'G';
	result = ft_strchr(cadena, search);
	if (result != NULL)
	{
		printf("found'%c'en posicion %ld en cadena \n", search, result - cadena);
	}
	else
	{
		printf ("No se encontro el caracter '%c' en la cadena ", search);
	}
	return (0);
}*/
