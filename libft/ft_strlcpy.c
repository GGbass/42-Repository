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
	while (i < size -1 && src[i] != '\0')
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

/*int	main()
{
	char	dest[10] = "Holas";
	char	src[] = "saco'ewea";
	printf("char dest antes de aplicar la funcion: %s\n", dest);
	ft_strlcpy(dest, src, sizeof(dest));
	printf("Este es el resultado:%s\n", dest);
	return (0);
}*/