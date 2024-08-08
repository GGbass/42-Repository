#include "unistd.h"

int	len(char *str)
{
	int	i = 0;

	while(str[i] != '\0')
		i++;
	return(i);
}
int	main(int ac, char **av)
{
	int i = -1;
	if (ac != 4 || len(av[2]) >= 2)
		return(write(1,"\n", 1), 0);
	while(av[1][++i] != '\0')
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);

	}
	return(write(1, "\n", 1), 0);
}
