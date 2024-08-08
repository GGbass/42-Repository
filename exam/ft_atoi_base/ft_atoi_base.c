#include <stdio.h>

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
 
int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		result;
	char	c;
	int		value;

	result = 0;
	sign = 1;
	if (str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign *= -1;
		++str;
	}
	while (*str && value >= str_base)
	{
		c = ft_tolower(*str);
		if (c >= '0' && c <= '9')
			value = c - '0';
		else if (c >= 'a' && c <= 'f')
			value = c - 'a' + 10;
		else
			break;
		result = result * str_base + value;
	}

	return (result * sign);
}

/* int	main(void)
{
	char	*str;

	str = "01234";
	printf("%d\n", ft_atoi_base(str, 2));
	return (0);
} */
