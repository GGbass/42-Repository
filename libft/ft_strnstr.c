/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:52:00 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/20 09:53:13 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}

/*int	main()
{
	const	char haystack[13] = "Bienvenidos";
	const	char needle[8] = "venidos";
	char		*result = ft_strnstr(haystack, needle, 12);
	if (result != NULL)
	{
		printf("subcadena encontrada %s\n", result);
	}
	else
	{
		printf ("subcadena no encontrada %s\n", result);
	}
	return (0);
}*/