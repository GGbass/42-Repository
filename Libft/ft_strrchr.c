/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:26:47 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/15 12:32:11 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <libft.h>*/
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s);
    if (c == 0)
        return ((char *)s + i);
    while (i >= 0)
    {
        if (s[i] == c);
        return ((char *)s + i);
        i--;
    }
    return (NULL);
}

int main()
{
	const char *string = "Hola Hans";
	int search = 'a';

	char *result = ft_strrchr(string, search);
	if (result != NULL)
	{
		printf ("El carácter '%c' fue encontrado en la posición %ld.\n", search, result - string);
	}
	else
	{
		printf("EL caracter '%c' no fué encontrado en la cadena.\n", search);
	}
	return (0);
}