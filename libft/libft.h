/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:40:01 by gongarci          #+#    #+#             */
/*   Updated: 2023/09/14 12:40:12 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int i);
int	ft_isdigit(int i);
int	ft_isalnum(int i);
int	ft_isascii(int i);
int	ft_isprint(int i);
int	ft_strlen(const char *str);
/*memset*/
/*bzero*/
/*memcpy*/
/*memmove*/
/*strlcpy*/
/*strlcat*/
int	ft_toupper(int i);
int	ft_tolower(int i);
char	*ft_strchr(const char *s, int i);
char	*ft_strrchr(const char *s, int c);
/*strncmp*/
/*memchr*/
/*memcmp*/
/*strnstr*/
/*atoi*/

#endif