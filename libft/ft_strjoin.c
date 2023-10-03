/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:43:26 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/03 10:43:29 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substr;
	size_t	len1;
	size_t	len2;
	size_t	sub_len;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sub_len = (len1 + len2 + 1);
	substr = malloc(sub_len);
	if (!substr)
		return (NULL);
	else
	{
		ft_memcpy(substr, s1, len1);
		ft_memcpy(substr + len1, s2, len2);
		substr[sub_len -1] = '\0';
	}
	return (substr);
}

/*int	main()
{
	char	*str1 = "Hola que";
	char	*str2 = "haces";
	char	*sub;

	sub = ft_strjoin(str1, str2);
	printf("la suma de %s\n y %s\n es %s\n", str1, str2, sub);
	free(sub);
	return (0);
}*/