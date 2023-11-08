/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_counters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:30:04 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/10 14:58:17 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	/*while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (1);*/
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
	return (count);
}
int	main()
{
	char str[] = "HELL,  YEAH keep testing";
	int word = ft_count(str, ' ');
	printf("numbers of words in the string is : %d\n", word);
	return (0);
}
