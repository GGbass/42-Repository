//#include <string.h>
//#include <stdio.h>
#include <libft.h>
void    *ft_memset(void *s, int c, size_t n)
{
	char *p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return(s);
}

/*int main(void)
{
	char str[50] = "Esto es una linea de caracteres.";
	printf("\nBefore memset(): %s\n", str);
	//memset(str + 13, '.', 8*sizeof(char));
	//printf("After memset: %s", str);
	ft_memset(str + 13, '.', 10*sizeof(char));
	printf("After my memset: %s", str);
	return (0);
}*/
