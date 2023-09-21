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
#include <libft.h>

char	*ft_strchr(const char *s, int i)
{	
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
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