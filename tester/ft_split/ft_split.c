#include "stdio.h"
#include "stdlib.h"

static int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

static int  alpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}

char    **ft_split(char *str)
{
 	char		**split;
 	int		words;
	int		i;
 	int		j;
	int		k;

    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if (alpha(str[i]) == 0)
        {
            while (alpha(str[i]) == 0)
                i++;
            words++;
        }
        i++;
    }
    //printf("words; %d\n", words);
    split = malloc((sizeof(char *) * words) + 1);
    if (!split)
        return (NULL);
    i = 0;
    j = 0;
    
    while(alpha(str[i]) == 0 && str[i] != '\0')
	    i++;
    while (str[i] != '\0')
    {
    	k = 0;
	split[j] = malloc(sizeof(char ) * 30);
        while (alpha(str[i]) == 1)
  	{
            split[j][k++] = str[i++];
	}
	while(alpha(str[i]) == 0 && str[i] != '\0')
	{
		i++;
	}
	j++;
	
    }
    split[j + 1] = NULL;
    return(split);
}

/*int main(void)
{
    char *str = "  Hey    you1213  asdas asdasd 2";
    char **string;
	int i = 0;
   string = ft_split(str); 
   while(string[i] != NULL)
   {
	   printf("%s\n", string[i]);
	   i++;
   }
    return (0);
}*/
