/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:57:42 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/17 12:57:54 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1 ++;
		s2 ++;
		n --;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int main()
{
	char	phrase1[12] = "Hola Mundo";
	char	phrase2[13] = "Hello World";
	size_t	n = 13;
	int		result = ft_strncmp(phrase1, phrase2, n);

	printf("Resultado %d\n", result);
	return (0);
}*/
/*s1 - Esta es la primera cadena que se compara.
s2 - Esta es la segunda cadena que se compara.
n - El número máximo de caracteres a comparar.
Valor devuelto
Esta función devuelve valores que son los siguientes:
si el valor de retorno es <0, indica que str1 es menor que str2.
si Valor de retorno> 0, indica que str2 es menor que str1.
si Valor de retorno = 0, indica que str1 es igual a str2.*/