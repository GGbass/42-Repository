#include "unistd.h"
int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	int	i = -1;
	if (ac != 2)
		return(write(1, "\n", 1));
	while(av[1][++i] != '\0')
	{
		if (av[1][i] == '_')
		{
			i++;
			if (is_alpha(av[1][i]) == 1)
				av[1][i] = av[1][i] - 32;
		}
		write(1, &av[1][i], 1);
	}
	return(write(1, "\n", 1), 0);
}
