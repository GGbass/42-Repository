//#include <stdio.h>
#include <libft.h>

int ft_isalpha(int i)
{
    if (('a' <= i && i <= 'z' || 'A' <= i && i <= 'Z'))
        return (1);
    return (0);   
}
/*int main()
{   
    int i;
    
    i = 66;
    if (ft_isalpha(i))
    {
	    printf( "%c it's an alpha\n",i);
    } 
    else
    {
	    printf("it's not an alpha\n",i);
    }
    
  return (0); 
}*/