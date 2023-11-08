/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:19:48 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/06 14:19:49 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)strlen(s) < (unsigned int)strdup(""))
		substr = "";
	if (len > (size_t)strlen(s + start))
		len = strlen(s + start);
	substr = calloc(len + 1, 1);
	if (!substr)
		return (NULL);
	while (i < len && start < (unsigned int)strlen(s))
	{
		substr[i++] = s[start++];
	}
	return (substr);
}

int	main(void)
{
	char	*cadena = "";
	char	*substr;

	substr = ft_substr(cadena, 5, 6);
	printf("%s\n", substr);
	free(substr);
	return (0);
}