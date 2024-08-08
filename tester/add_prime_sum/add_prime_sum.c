#include "unistd.h"
#include "string.h"
#include "stdio.h"

void	put_number(int	n)
{
	char	c_num;
	
	c_num = '0';
	if(n >= 10)
	{
		put_number(n / 10);
		put_number(n % 10);
	}
	if (n < 9)
	{
		c_num = c_num + n;
		write(1, &c_num, 1);
	}
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (result);
		result = (result * 10 + (str[i] - '0'));
		i++;
	}
	return (result);

}


int	is_prime(int n)
{
	int	i = 2;
	//int	n = 63;
	int	sign = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			//printf("%d: is not prime number\n", n);
			return (0);
		}
		i++;
	}
	//printf("%d: is prime\n", n);
	return (1);
}

int	main(int ac, char **av)
{
	int	i = 2;
	int	result = 0;
	int	number = 0;
	if (ac != 2 || ft_atoi(av[1]) <= 0)
	{
		write(1 , "0", 1);
		write(1, "\n", 1);
		return (0);
	}
	number = ft_atoi(av[1]);
	while(i <= number)
	{
		if (is_prime(i) == 1)
			result = result + i;
		i++;
	}
	put_number(result);
	write(1, "\n", 1);
	return (0);
}
