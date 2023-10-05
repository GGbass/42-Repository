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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < (unsigned int)ft_strdup(""))
		substr = ft_strdup(substr);
	if (len > (size_t)ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = ft_calloc(len + 1, 1);
	if (!substr)
		return (NULL);
	while (i < len && start < (unsigned int)ft_strlen(s))
	{
		substr[i++] = s[start++];
	}
	return (substr);
}*/

/*int	main(void)
{
	char	*cadena = "Hola Milica";
	char	*substr;

	substr = ft_substr(cadena, 5, 6);
	printf("%s\n", substr);
	free(substr);
	return (0);
}*/