#include "unistd.h"

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = (219 - av[1][i]);
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = (155) - av[1][i];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	return(write(1, "\n", 1), 0);
}
