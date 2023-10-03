/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:26:44 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/03 11:26:45 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = 0;
	if (!s1 && !set)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j -1] && ft_strchr(set, s1[j - 1]) && (j > i))
			j--;
		substr = (char *)malloc(sizeof(char ) * (j - i + 1));
		if (substr)
			ft_strlcpy(substr, &s1[i], j - i + 1);
	}
	return (substr);
}

/*
1.- It can be used to clean up user input, 
2.- format strings for output,
3.- remove whitespace from strings before processing them

This function works by first finding the first non-whitespace
character in the string.
The function then copies the string from the first non-whitespace
character to the end of the string,
excluding any trailing whitespace*/
