/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:12 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/23 17:42:53 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	incluir(char *buffer, char *line)
{
	int	i;
	int	j;
	int	eol;

	eol = 0;
	if (ft_strchr(buffer, '\n'))
		eol = 1;
	i = 0;
	while (buffer[i] != '\n' && i < ft_strlen(buffer))
		i++;
	j = ft_strlen(line);
	ft_memcpy(line + ft_strlen(line), buffer, i);
	ft_memcpy(buffer, buffer + i + 1, ft_strlen(buffer) - i);
	line[j + i] = '\0';
	return (eol);
}

int	first_memory(char **buffer, char **line)
{
	*line = malloc(30 * sizeof(char));
	if (!*line)
		return (0);
	if (!*buffer)
	{
		*buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!*buffer)
		{
			free(*line);
			return (0);
		}
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0 || first_memory(&buffer, &line) == 0)
		return (NULL);
	bytes = 1;
	if (incluir(buffer, line) == 1)
		bytes = 0;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		if (incluir(buffer, line) == 1)
			break ;
	}
	return (ft_substr(line, 0, ft_strlen(line) +1));
}

/*int	main(void)
{
	char	*line;
	int		fd;

	line = NULL;
	fd = open("fichero.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	line = get_next_line(fd);
	printf("%s\n", line);
	line = get_next_line(fd);
	printf("%s\n", line);
	close(fd);
	return (0);
}
*/
/* funcion read.
0 		  = final fichero
-1		  =  problema de lectura
n numeros = bytes leidos.
 
 int read(int fd, void *buffer	, size_t n_bytes)
 */