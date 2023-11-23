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
	size_t		bytes;

	line = NULL;
	if (fd == -1)
		return (NULL);
	//if (ft_strchr(buffer, '\n') != '\0')
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	buffer[bytes] = '\0';
	bytes = read(fd, buffer, BUFFER_SIZE);
	return (buffer);
}

/* funcion read.
0 		  = final fichero
-1		  =  problema de lectura
n numeros = bytes leidos.
 
 int read(int fd, void *buffer	, size_t n_bytes)
 */