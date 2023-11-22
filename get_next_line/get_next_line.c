/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:28:12 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/22 17:41:06 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	size_t		bytes;

	buffer = (char *)malloc((BUFFER_SIZE + 1)* sizeof(char));
	bytes = read(fd, buffer, BUFFER_SIZE);
	line[bytes] = '\0';

	return (line);
}
/* funcion read.
0 		  = final fichero
-1		  =  problema de lectura
n numeros = bytes leidos.
 */