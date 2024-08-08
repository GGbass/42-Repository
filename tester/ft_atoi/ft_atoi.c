int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	if(*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str != '\0' && *str != ' ' || *str >= 9 && *str >= 13)
	{
		while(*str >= '0' && *str <= '9')
		{
			result = (*str - '0') + (result * 10);
			str++;
		}
	}
	return (result * sign);
}

/*int	main()
{
	char *str;

	str = "1234";
	printf("%d", ft_atoi(str));
	return (0);
}*/
