#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"

int	is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
 	c == 'a' || c == 'z' || c == '!' || c == '?';
	return(0);
}
int	len(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;
	int	k = 0;
	int	g = 0;
	char	*word;

	if (ac == 1)
		return(write(1, "\n", 1), 0);
	
	while(is_blank(av[i][j]) == 1)
		j++;
	while(!is_blank(av[i][j]) && av[i][j + 1] != '\0')
	{
		j++;
		k++;
	}
	word = malloc(sizeof(char) * k);
	if (!word)
		return (0);
	j = j - k;
	k = 0;
	while(!is_blank(av[i][j]) && av[i][j] != '\0')
		word[k++] = av[i][j++];
	word[k + 1] = '\0';
	while(is_blank(av[i][j]) == 1)
		j++;
	while(av[i][j] != '\0')
	{
		g = 2;
	
		if (is_blank(av[i][j]) == 1 && is_blank(av[i][j + 1]) == 1)
			j++;
		else if(is_blank(av[i][j]) == 1 && !is_blank(av[i][j + 1]) && av[i][j + 1] != '\0')
		{
			write(1 , &av[i][j], 1);
			j++;
		}
		else if (!is_blank(av[i][j]))
		{		
			write(1, &av[i][j], 1);
			j++;
		}
		else
			j++;
	}
	if (g == 2)
		write(1 , " ", 1);
	write(1, word, len(word));
	write(1, "\n", 1);
	
	return (0);
}
