/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:32 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/19 17:10:39 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_toupper(char *str)
{
	char		*str1;
	int			i;

	str1 = ft_strdup(str);
	i = 0;
	while (str1[i] != '\0')
	{
		str1[i] = ft_toupper(str1[i]);
		i++;
	}
	return (str1);
}
