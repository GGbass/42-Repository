#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"


int	blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return (1);
	else if(c >= 33 && c <= 132)
		return (0);
	else
		return(-1);
}

int	ft_len(char **array)
{
	int	i = 0;
	while(array[i] != NULL)
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

static void	ft_strcpy(char *str1, char **str2)
{
	int	i = 0;
	int	size = 0;
	int	j = 0;
	int	index = 0;

	while(str1[i] != '\0')
	{
		if ((blank(str1[i])) == 0)
		{
			size = 0;
			while((blank(str1[i])) == 0)
			{
				size++;
				i++;
			}
			str2[index] = malloc(sizeof(char) * size);
			if (!str2[index])
				return;
			j = 0;
			while(j < size)
			{
				str2[index][j] = str1[(i - size) + j];
				j++;
			}
			index++;
		}
		else
			i++;
	}
	str2[index] = NULL;
}


char	**ft_split(char *str, int *words)
{
	int	i = 0;
	int	j = 0;
	char	**split;

	while(str[i] != '\0')
	{
		if (blank(str[i]) == 0)
		{
			while(blank(str[i]) == 0)
				i++;
			(*words)++;
		}
		else
		{
			i++;
		}
	}

	split = malloc(sizeof(char *) * (*words));
	if (!split)
		return (NULL);
	ft_strcpy(str, split);
	return (split);
}


int	main(int ac, char **av)
{
	int	word = 1;
	char	**splited;
	int	i = 0;
	int	len;

	if (ac != 2)
		return(write(1, "\n", 1), 0);
	splited = ft_split(av[1], &word);
	len = ft_len(splited);
	while(len > 0)
	{
		write(1 , splited[len - 1], ft_strlen(splited[len - 1]));
		if (len - 1 != 0)
			write(1, " ", 1);
		len--;
	}
	write(1, "\n", 1);
	free(splited);
	return (0);
}
