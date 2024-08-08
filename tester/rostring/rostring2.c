#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"

/* void	*remove_space(char **str)
{
	int	i = 0;
	int	j = 0;

	while(*str[i] == ' ' || *str[i] == '\t')
		i++;
	while(str[i] != ' ' && str[i] != '\t' || str[i] != '\0')
	{
		*str[j] = *str[i];
		i++;
		j++;
	}
	write(1, str, j);
}

char	*words_count(char *str, int *words)
{
	int		i = 0;
	char	*first;
	int		j = 0;
	while(str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while(str[i] == ' ' || str[i] == '\t')
				i++;
			*words++;
			
		}
		"   "
		i++;
	}
	return(first);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	words = 0;
	char	*first;

	if (argc == 1)
		return(write(1, "\n", 1), 0);
	if (argc >= 3)
		return (remove_space(&argv[i]), 0);
	first = words_count(argv[i], &words);
} */