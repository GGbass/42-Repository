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

int	main(void)
{
	char	*line;
	int		fd;

	line = NULL;
	fd = open("fichero.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	close(fd);
	return (0);
}
