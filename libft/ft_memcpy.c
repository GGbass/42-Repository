#include <libft.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_dest;
	char	*p_src;

	i = 0;
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
	
}
/* if (dest != NULL && src != NULL && n > 0) {
  ft_memcpy(dest, src, n);
} else {
  // Desbordamiento de buffer script.
}*/
/*int	main()
{
	char	dest[7];
	char	src[] = "Hola Mundo!";

	ft_memcpy(dest, src, sizeof(src));
	printf("Resultado de dest es %s\n :", dest);
	return (0);
}*/