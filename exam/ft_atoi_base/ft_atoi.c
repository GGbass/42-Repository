/* #include "libft.h" */
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || (str[i] == '+'))
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * negative);
}

int	main()
{
	char	*cadena = "0666461855";
	/* printf(" ft_atoi%d",ft_atoi(cadena)); */
	printf("Atoi %d\n;", atoi(cadena));
	return (0);
}