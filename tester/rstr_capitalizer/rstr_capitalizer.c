#include "stdio.h"
#include "unistd.h"

int	alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || c == '.' || c == ',' || c == '!'|| c == '?' || c == '\t' || (c >= 'A' && c <= 'Z' ) || (c >= '0' && c <= '9') )
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		return (write(1, "\n", 1), 0);
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (alpha(argv[i][j + 1]) == 0 && argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] = (argv[i][j] - 'a' + 'A');
			}
			else if (alpha(argv[i][j + 1]) == 1 && argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				argv[i][j] = (argv[i][j] - 'A' + 'a');
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
