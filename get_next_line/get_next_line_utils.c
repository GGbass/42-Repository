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

char	*ft_substr(char **s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if ((unsigned int)ft_strlen(*s) < start)
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(*s + start))
		len = ft_strlen(*s + start);
	if (!*s)
		return (NULL);
	substr = ft_calloc(len + 1, 1);
	if (!substr)
		return (NULL);
	while (i < len && start < (unsigned int)ft_strlen(*s))
	{
		substr[i++] = (*s)[start++];
	}
	//printf("ft_substr current buffer %s\n", *s);
	free(*s);
	return (substr);
}

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*point;

	b = count * size;
	point = malloc(b);
	if (!point)
		return (NULL);
	else
	{
		ft_bzero(point, b);
	}
	return (point);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substr;
	size_t	len;

	len = (ft_strlen(s1) + (ft_strlen(s2)) + 1);
	substr = malloc(len);
	if (!substr)
		return (NULL);
	else
	{
		ft_memcpy(substr, s1, ft_strlen(s1));
		ft_memcpy(substr + ft_strlen(s1), s2, ft_strlen(s2));
		substr[len -1] = '\0';
	}
	return (substr);
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
