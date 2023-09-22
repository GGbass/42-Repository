#include <libft.h>
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while(src[i])
			i++;
		return (i);
	}
	while (i < size -1 && i != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while(src[i] != '\0');
			i++;
	return (i);
}
