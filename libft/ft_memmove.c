#include "libft.h"
/*#include <string.h>*/
/*#include <stdio.h>*/

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	len;

	len = 0;
	if (dest < src)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}