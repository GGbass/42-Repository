/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:24:17 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/10 15:24:26 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (1);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				count++;
		}
		else
			i++;
	}
	return (count + 1);
}

static char	**ft_split_aux(char **pointer, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (k < ft_count(s, c) - 1)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		pointer[k] = ft_substr(s, i, j - i);
		if (!pointer[k])
			return (ft_free(pointer));
		k++;
		i = j;
	}
	return (pointer);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;

	if (!s)
		return (NULL);
	if ((*s == 0 && c == 0) || (!s && c == 0))
	{
		pointer = ft_calloc(1, sizeof(char *));
		return (pointer);
	}
	pointer = ft_calloc(ft_count(s, c), sizeof(char *));
	if (!pointer)
		return (NULL);
	ft_split_aux(pointer, s, c);
	return (pointer);
}
