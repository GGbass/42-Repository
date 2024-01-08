/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:43:33 by gongarci          #+#    #+#             */
/*   Updated: 2023/11/23 16:14:48 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	my_printf(char *line, int fd)
{
	while (line != '\0')
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
	printf("\nEOF");
	return (0);
}

int	main(void)
{
	char	*line;
	int		fd;
	int		fd1;

	line = NULL;
	fd = open("fichero.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("\033[32m1.- fichero txt  \033[00m\n");
	my_printf(line, fd);

	close(fd);
	return (0);
}
