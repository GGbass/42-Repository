#include "stdio.h"
#include "string.h"
int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	cmp = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return(s1[i] - s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	printf("ft_strcmp: %d\n", ft_strcmp("holaaaa","holaa"));
	printf("strcmp: %d\n", strcmp("holaaaa","holaa"));
	return (0);
}*/
