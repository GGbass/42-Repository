/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   root_13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:29:09 by gongarci          #+#    #+#             */
/*   Updated: 2024/02/22 20:10:10 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_swiper(char *string)
{
	int	i;
	
	i = 0;
	while (string[i] != '\0')
	{
		if(string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = (string[i] - 'a' + 13) % 26 + 'a';
			printf("%c", string[i]);
			i++;
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = (string[i] - 'A' + 13) % 26 + 'A';
			printf("%c", string[i]);
			i++;
		}
		else
			printf("It's not a character");
	}
	return(NULL);
}

int	main(int argc, char **argv)
{
	int i;
	int	j;
	
	i = 1;
	j = 0;
	while (argc > 1 && i < argc)
	{
		printf("%s\n", argv[i]);
		if (argv[i][j] != '\0' && i < argc)
		{
			ft_swiper(argv[i]);
			printf("\n");
			j = 0;
		}
		i++;
	}
	return (0);
}

/* A B C D E F G H I J K L M N O P Q R S T U V W X Y Z */
/* Ceaser root13 for multiples arguments*/
