#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*substr;
	int	i;

	i = 0;
	if (argc != 3)
		return (write(1, "\n", 1), 0);
	while (argv[1][i++] != '\0')
	{
		if (argv[1][i] != substr[i])
			substr[i] = argv[1][i];
		if (argv[1][i] == substr[i - 1])
			i++;
		i++;
	}
	i = 0;
	while (argv[2][i++] != '\0')
	{
		if (argv[2][i] == substr[i - 1])
			i++;
		else if (argv[2][i] != substr[i])
				substr[i] = argv[2][i];
	}
	return (substr);
}