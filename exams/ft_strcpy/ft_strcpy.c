#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		s1[i] = s2[j];
		i++;
		j++;

	}
	s1[i] = '\0';
	return (s1);
}
int	main(void)
{
	char	s1;
	char	s2;

	s1 = "Hola";
	s2 = "Mundo";
	int result = ft_strcpy(s1, s2);
	printf("El resultado de la funcion es %d\n", result);
	return (0);
	
}
