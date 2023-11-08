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

#include "printf.h"

static	void	ft_check_print(char str, int fd, va_list *args)
{
	if (str == '%')
		ft_putchar('%', fd);
	else if (str == 'c')
		ft_putchar(va_arg(*args, int), fd);
	else if (str == 's')
		ft_string(va_arg(*args, char *), fd);
	else if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg(*args, int), fd);
	else if (str == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), fd);
	else if (str == 'x' || str == 'X')
		ft_puthexa(va_arg(*args, unsigned long int), fd, str);
}

int	ft_printf(const char *str, ...)
{
	va_list(args);
	int		i;
	int		fd;

	i = 0;
	fd = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check_print(str[i++], fd, &args);
		}
		else
		{
			ft_putchar((char)str[i++], fd = 1);
		}
	}
	va_end(args);
	return (fd);
}

int	main(void)
{
	char str[11] = "hola mundo";
	int	i = 667666;
	//long long int	power;
	//power = pow(i, 8);
	printf("%d\n", i / 16);
	printf("%d\n", i % 16);
	//printf("%d\n", power);
	ft_printf("Hola Mundo %% %s %u\n", str, i);
	ft_printf("Hola Mundo %% %s %x\n", str, i);
	printf("Hola Mundo %% %s %x", str, i);
	return (0);
}