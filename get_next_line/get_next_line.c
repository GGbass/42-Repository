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

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (allocate_memory(&buffer, &line) == 0)
		return (NULL);
	bytes = reader(&buffer, &line, fd);
	if (bytes == -1)
		return (NULL);
	else if (bytes == 0)
		free_memory(&buffer);
	//if (line[0] == '\0' || line[ft_strlen(line) - 1] != '\n')
	//	free_memory(&buffer);
	if (line[0] == '\0')
	{
		free_memory (&line);
		return (NULL);
	}
	return (line);
	//return ((ft_substr(&line, 0, ft_strlen(line))));
}

int	reader(char **buffer, char **line, int fd)
{
	int		bytes;

	bytes = 1;
	while (bytes > 0 && join_and_check(*buffer, line) == 0)
	{
		bytes = read(fd, *buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free_memory(buffer);
			free_memory(line);
			return (-1);
		}
		(*buffer)[bytes] = '\0';
	}
	if (!(*line))
		return (-1);
	return (bytes);
}

int	join_and_check(char *buffer, char **line)
{
	int		i;

	i = 0;
	while (buffer[i] != '\n' && i < ft_strlen(buffer) && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\n')
		i++;
	(*line) = ft_strjoin(*line, buffer, i);
	if (! (*line))
		return (-1);
	ft_memcpy(buffer, buffer + i, ft_strlen(buffer) - i + 1);
	i = ft_strlen(*line);
	if (i > 0 && (*line)[i - 1] == '\n')
		return (1);
	return (0);
}

int	allocate_memory(char **buffer, char **line)
{
	(*line) = malloc(sizeof(char));
	if (!(*line))
	{
		if (*buffer)
			free_memory(buffer);
		return (0);
	}
	(*line)[0] = '\0';
	if (!(*buffer))
	{
		(*buffer) = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!(*buffer))
		{
			free_memory(line);
			return (0);
		}
		(*buffer)[0] = '\0';
	}
	return (1);
}

void	free_memory(char **p)
{
	if (*p)
	{
		free(*p);
		(*p) = NULL;
	}
	return ;
}

/*
void my_printf(char *s)
{
	if(s)
		printf("%s\n",s);
	else
		printf("EOF\n");
}

int	main(void)
{
	char	*line;
	int		fd;

	line = NULL;
	fd = open("fichero.txt", O_RDONLY);
	line = get_next_line(fd);
	my_printf(line);
	line = get_next_line(fd);
	my_printf(line);
	line = get_next_line(fd);
	my_printf(line);
	line = get_next_line(fd);
	my_printf(line);
	line = get_next_line(fd);
	my_printf(line);
	line = get_next_line(fd);
	my_printf(line);
	close(fd);
	return (0);
}*/

/* funcion read.
0 		  = final fichero
-1		  =  problema de lectura
n numeros = bytes leidos.
 
 int read(int fd, void *buffer	, size_t n_bytes)
 */