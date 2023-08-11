#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &i, 1);
		i++;
	}
	return(i);
}
int	main(void)
{
	char phrase[] = " Hola";
	int result;
		
	result = ft_strlen(phrase);
	write (1, &result, 1);
	return (0);
}
