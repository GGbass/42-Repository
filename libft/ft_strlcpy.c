/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:30:32 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/17 09:30:44 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
			dest[i] = '\0';
	while (src[i] != '\0')
			i++;
	return (i);
}

/*int	main(void)
{
	char		dest[15];
	const char	*src;
	size_t	size;

	src = "Gonzalo Garcia";
	size = ft_strlcpy(dest, src, ft_strlen(src) + 1);
	//size = strncpy(dest, src, ft_strlen(src));
	printf("Caracteres copiados del src %zu\n", size);
	printf("resultado del dest %s\n", dest);
	return (0);
}*/
