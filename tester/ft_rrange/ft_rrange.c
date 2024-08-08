#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

/* int	*ft_rrange(int a, int b)
{
	int	len;
	int	*range;
	int	tmp;
	int	i;

	tmp = a;
	len = 0;
	i = 0;
	while (tmp++ <= b)
		len++;
	if (len == 0)
	{
		while (tmp-- >= b)
			len++;
	}
	range = malloc(len * sizeof(int));
	if (range == NULL)
		return (NULL);
	while(i < len)
	{
		range[i] = b;
		b--;
		i++;
	}
	return (range);
}
// len n betweens a and b
// range[len] = {0 , 0 , 0}
int	main()
{
	int	*range = ft_rrange(1, 3);

	while (*range)
	{
		printf("%d\n", *range);
		range++;
	}
	return (0);
} */


int	*ft_rrange(int a, int b)
{
	int len;
	int step;
	int current;
	int *array;
	int i;

	len = abs(a - b) + 1;
	//printf("%d\n", len);
	if(a > b)
		step = 1;
	else
		step = -1;

	array = malloc(len * sizeof(int));
	current = b;
	i = 0;
	while(i < len)
	{
		array[i] = current;
		current += step;
		i++;
	}
	return (array);
}

int	main(void)
{
	int i;
	size_t len;

	i = 0;
	int	*range = ft_rrange(0, -3);
	len = sizeof(range) / 2;
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
/* 	while (*range !=)
	{
		if (isdigit(*range) == 0)
			printf("%d\n", *range);
		range++;
	} */
	return (0);
}