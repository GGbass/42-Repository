#include "stdio.h"
#include "stdlib.h"

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	result = 0;
	int	sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (result * sign);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	
	return (result * sign);
}


/*int	main(void)
{
	char *a = "-+65465";
	printf("a :%d\n", ft_atoi(a));
	printf("a :%d\n", atoi(a));
	return (0);
}*/

