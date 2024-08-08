#include <unistd.h>
#include <stdio.h>

void	repeater(char *argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			j = argv[i] - 'a';
			while (j-- >= 0)
				write (1, &argv[i], 1);
		}
		else if (argv[i] >= 'A' && argv [i] <= 'Z')
		{
			j = argv[i] - 'A';
			while (j-- >= 0)
				write (1, &argv[i], 1);
		}
		else
			write (1, &argv[i], 1);
	i++;
	}
}

int	main(int argc, char **argv)
{
/* 	int	i;
	int	j;

 	i = 0;
	j = 0; */
	if (argc != 2)
		return ( write(1, "\n", 1), 0);
	repeater(argv[1]);
/* 	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			j = argv[1][i] - 'a';
			while (j >= 0)
			{
				write (1, &argv[1][i], 1);
				j--;
			}
		}
		else if (argv[1][i] >= 'A' && argv [1][i] <= 'Z')
		{
			j = argv[1][i] - 'A';
			while (j >= 0)
			{
				write (1, &argv[1][i], 1);
				j--;
			}
		}
		i++;
	} */
	write(1, "\n", 1);
	return (0);
}
