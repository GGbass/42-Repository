#include "unistd.h"
#include "stdio.h"

int	ft_atoi(char *str)
{
	int	i = -1;
	int	result = 0;

	while(str[++i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return(result);
		result = ((result * 10) + str[i] - '0');
	}
	return(result);
}

void	put_numb(int n)
{
	int	i = 0;
	char	number;

	number = '0';

	if (n >= 10)
	{
		put_numb(n / 10);
		put_numb(n % 10);
	}
	if (n < 10)
	{
		number  = n + '0';
		write(1 , &number, 1);
	}
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	result = 0;
	int	tab;

	if (ac != 2)
		return(write(1, "\n", 1));
	tab = ft_atoi(av[1]);
	while (i <= 9)
	{
		put_numb(i);
		write(1, " x ", 3);
		put_numb(tab);
		write(1, " = ", 3);
		put_numb(i * tab);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

