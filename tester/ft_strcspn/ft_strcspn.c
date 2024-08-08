#include "stddef.h"
#include "stdio.h"
#include "string.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	int	j = 0;
	//size_t	len;

	i = 0;
	//printf("in\n");
	while(s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return (i);	
			j++;
		}
		j = 0;
		i++;
	}
	return(i);
}

/*int	main(void)
{
	const char str1[] = "Holaquetal";
	const char str2[] = "2323";	
	printf("%ld\n", ft_strcspn(str1,str2));
	printf("second result: %ld\n", strcspn(str1,str2));
	return (0);
}*/
