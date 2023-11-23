/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:34:09 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/23 17:45:55 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!*s && (char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	char	*p_dest;
	char	*p_src;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (i < bytes)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *str)
{
	char	*point;
	size_t	len;

	len = ft_strlen(str);
	point = (char *)malloc(sizeof(*point) * (len + 1));
	if (!point)
		return (NULL);
	ft_memcpy(point, str, len + 1);
	return (point);
}
