#include "libft.h"
/*#include <string.h*/
/*#include <stdio.h>*/

void    *ft_memchr(const void *s, int c, size_t n_bytes)
{
    size_t  i;

    i   = 0;
    while (i < n_bytes)
    {
        if (((unsigned char *)s)[i] == ((unsigned char *) c)[i]);
                return ((unsigned char *)s + i);
        i++;
    }
    return (NULL);
}

/*int   main()
{
    char str[] = "Hola Mundo";
    char *c = ft_memchr(str, 'o', sizeof(str));
    if (c != NULL)
    {
        printf("caracter  'o' encontrado %zu\n", c - str);
    }
    else
    {
        printf(" 'o' No encontrado %zu\n", c);
    }
    return(0);
}*/