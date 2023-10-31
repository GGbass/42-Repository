/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:44:01 by cde-la-r          #+#    #+#             */
/*   Updated: 2023/07/23 23:10:39 by cde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_atoi(char *str);
int		length(char *str);
void	my_write(int n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = my_atoi(argv[1]);
		my_write(n);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	my_atoi(char *str)
{
	int	n;
	int	i;
	int	sgn;

	n = -1;
	sgn = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void	my_write(int n)
{
	int		nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40,
		50, 60, 70, 80, 90, 100, 1000, 1000000, 1000000000, 2147483647};
	char	*words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
		"twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty",
		"forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million", "billion"};
	int		i;

	i = 0;
	while (n >= nums[i + 1])
		i++;
	if (n / nums[i] != 0)
	{
		if (n / nums[i] != 1)
		{
			my_write(n / nums[i]);
			write(1, " ", 1);
		}
		write(1, words[i], length(words[i]));
		if (n % nums[i] != 0)
		{
			write(1, " ", 1);
			my_write(n % nums[i]);
		}
	}
}

int	length(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
