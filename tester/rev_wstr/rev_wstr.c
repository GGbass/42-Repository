#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

int	is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return(1);
	else if (c >= 33 && c <= 132)
		return (0);
	else
		return(-1);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i] != '\0')
		i++;
	return(i);
}

char	**word_count(char *str)
{
	int	i = 0;
	int	j = 0;
	int	c = 0;
	int	k = 0;
	char	words = 0;
	char	**split;

	while(str[i] != '\0')
	{
		if (is_blank(str[i]) == 0)
		{
			while ((is_blank(str[i]) == 0) && str[i] != '\0')
				i++;
			words++;
		}
		else
			i++;
	}
	split = malloc((sizeof(char *) * words) + 1);
	if (!split)
		return (NULL);
	i = 0;
	words = 0;
	while(str[i] != '\0')
	{
		
		if (is_blank(str[i]) == 0)
		{
			j = 0;
			while (is_blank(str[i]) == 0)
			{
				j++;
				i++;
			}
			split[words] = malloc(sizeof(char) * j);
			if (!split[words])
				return (NULL);
			k = 0;
			c = 0;
			k = i - j;
			while (c < j)
			{
				split[words][c++] = str[k++];
			}
			words++;
		}
		else
			i++;
	}
	split[words] = NULL;
	return(split);
}

int	main(int ac, char **av)
{	int	i = 0;
	char	**split;
	if (ac != 2)
		return (write(1, "\n", 1), 0);
	split = word_count(av[1]);
	while(split[i] != NULL)
		i++;
	i =  i - 1;
	while(i >= 0)
	{
		write(1, split[i], ft_strlen(split[i]));
		if (i != 0)
			write(1 , " ", 1);
		i--;
	}
		write(1 ,"\n", 1);
	return (0);
}
