#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		return(write(1, "\n", 1), 0);
	while(argc > 1 && i < argc)
		{
			while (argv[i][j] != '\0' && i < argc)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - ('a' - 'A');
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = argv[i][j] + ('a' - 'A');
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, " ", 1);
			j = 0;
			i++;
		}
	write(1, "\n", 1);
	return (0);
}


/* int		main(int	argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
} */