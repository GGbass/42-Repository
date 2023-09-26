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
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/*<ctype.h>*/
int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_toupper(int i);
int		ft_tolower(int i);
int		ft_isprint(int i);
/*<string.h>*/
void	*ft_memset(void *s, int c, size_t n);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int i);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t bytes_copied);
/*<stdlib.h>*/

/* 42 functions*/
#endif
/**
 *functions missing:
 memchr
 memcmp
 atoi
 usingmalloc :
 calloc
 strdup

*/