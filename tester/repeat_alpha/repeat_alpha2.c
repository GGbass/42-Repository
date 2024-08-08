#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	if (argc != 2)
		return ( write(1, "\n", 1), 0);
	while(argv[i][j] != '\0')
	{
		if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
		{
			k = argv[i][j] - 'a';
			while (k-- >= 0)
				write (1, &argv[i][j], 1);
		}
		else if (argv[i][j] >= 'A' && argv [i][j] <= 'Z')
		{
			k = argv[i][j] - 'A';
			while (k-- >= 0)
				write (1, &argv[i][j], 1);
		}
		else
			write (1, &argv[i][j], 1);
		j++;
	}
	return (write(1,"\n", 1), 0);
}
