#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	result;
	result = 0;
	if (ac != 4)
		return ( write(1, "\n", 1), 0);
	if (av[2][0] == '+')
		result = (atoi(av[1]) + atoi(av[3]));
	else if (av[2][0] == '-')
		result = (atoi(av[1]) - atoi(av[3]));
	else if (av[2][0] == '*')
		result = (atoi(av[1]) * atoi(av[3]));
	else if (av[2][0] == '/')
		result = (atoi(av[1]) / atoi(av[3]));
	else if (av[2][0] == '%')
		result == (atoi(av[1]) % atoi(av[3]));
	printf("%d\n", result);
	return (0);
}
