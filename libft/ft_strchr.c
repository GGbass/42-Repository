/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:11:35 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/06 13:44:14 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!*s && (char)c == '\0')
		return ((char *)s);
	return (NULL);
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
}Esto devuelve un puntero a la primera aparición del carácter c en la cadena str,
 o NULL si no se encuentra el carácter.*/
