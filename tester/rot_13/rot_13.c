#include "unistd.h"
#include "stdio.h"
int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc != 2)
		return(write(1, "\n", 1), 0);
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') 	
		{
			argv[1][i] = ((argv[1][i] - 'A' + 13) % 26 + 'A');
			write(1, &argv[1][i++], 1);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			argv[1][i] = ((argv[1][i] - 'a' + 13) % 26 + 'a');
			write(1, &argv[1][i++], 1);
		}
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}