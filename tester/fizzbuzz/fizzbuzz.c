#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	while(i >= 1 && i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz\n");
			i++;
		}
		else if (i % 3 == 0 )
		{
			printf("fizz\n");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("buzz\n");
			i++;
		}
		else
		{
			printf("%d\n", i);
			i++;
		}
	}
	return (0);
}
