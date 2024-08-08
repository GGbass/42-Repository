#include <unistd.h>

void	ft_foward(char *string)
{
	int	i;
	
	i = 0;
	while(string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = (string[i] - 'a' + 1) % 26 + 'a';
			write(1, &string[i], 1);
			i++;
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = (string[i] - 'A' + 1) % 26 + 'A';
			write(1, &string[i], 1);
			i++;
		}
		else
		{
			write(1,&string[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	if (argc <= 1)
		return (write(1, "\n", 1),0);
	if(argv[i][j] == " ");
		return (write(1, "\n", 1), 0);
	while (argc > 1 && i < argc)
	{
		if(argv[i][j] != '\0' && i < argc && argv[i][j])
		{
			ft_foward(argv[i]);
			write(1, " ", 1);
			j = 0;
		}

		i++;
	}
	write(1, "\n", 1);
	return(0);
}
