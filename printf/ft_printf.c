/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:44 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/31 20:52:58 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_check_print(char str, va_list *args, int len)
{
	if (str == '%')
		ft_putchar('%', len);
	else if (str == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (str == 's')
		ft_string(va_arg(*args, char *), len);
	else if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg(*args, int), len);
	else if (str == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (str == 'x' || str == 'X')
		ft_puthexa(va_arg(*args, unsigned long int), str, len);
	else if (str == 'p')
		ft_putmem(va_arg(*args, size_t), len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_list(args);
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check_print(str[i++], &args, len);
		}
		else
		{
			ft_putchar((char)str[i++], len++);
		}
	}
	va_end(args);
	return (len);
}
/*int	main(void)
{
	char str = 'c';
	char str1[11] = "Hola mundo";
	int 
	//int	i = 854342;
	//printf("%d\n", i / 16);
	//printf("%d\n", i % 16);
	//printf("%d\n", power);
	//printf("Hola Mundo %% %s %x %p \n", str, i, &i)
	printf("hola mundo %% %c %s\n", str, str1);
	ft_printf("hola mundo %% %c %s\n", str, str1);
	return (0);
}*/