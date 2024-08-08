#include "stdio.h"
#include "stdlib.h"
int	*ft_range(int start, int end)
{
	int	*array;
	int	i;
	int	tmp;
	int	increase = 1;	
	i = 0;
	tmp = start;
	if (start > end)
		increase = -1;
	while(tmp <= end)
	{	
		tmp++;
		i++;
	}	
	array = malloc(sizeof(int) * i);
	if(!array)
		return (NULL);
	i = 0;
	tmp = start;
	while(tmp != end + increase)
	{
		array[i++] = tmp;
		tmp += increase;	
	}
	return (array);
}

/*int	main(void)
{
	int	*array;
	int	i = 0;
	array = ft_range(1, 3);
	while(i < 4)
	{
		printf("inside\n");
		printf("%d\n", array[i]);
		//*array++;
		i++;
	}
	return (0);
}*/
