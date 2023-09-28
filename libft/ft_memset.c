/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:34:01 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/26 10:34:03 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
			p[len - 1] = c;
			len--;
	}
	return (b);
}

/*int main(void)
{
	char str[50] = "Esto es una linea de caracteres.";
	printf("\nBefore memset(): %s\n", str);
	//memset(str + 13, '.', 8*sizeof(char));
	//printf("After memset: %s", str);
	ft_memset(str + 13, '.', 10*sizeof(char));
	printf("After my memset: %s", str);
	return (0);
}*/