/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:33 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/18 20:56:26 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		t_atoi(char	*str);
void	ft_bzero(void	*dest, size_t	count);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memset(void	*dest, int c, size_t	count);
char	*ft_strchr(const char	*str, int ch);
int		ft_strlen(char	*str);
char	*ft_strrchr(const char	*str, int ch);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char	*string1, \
const char	*string2, size_t	num);
void	*ft_memcpy(void *restrict	dst, const void *restrict	src, size_t n);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);
size_t	ft_strlcat(char *restrict	dst, \
const char *restrict	src, size_t	dstsize);
size_t	ft_strlcpy(char *restrict	dst, \
const char *restrict	src, size_t	dstsize);
void	*ft_memchr(const	void	*s, int c, size_t	n);
int		ft_memcmp(const void	*string1, const void	*string2, size_t	n);
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
void	*ft_calloc(size_t	count, size_t	size);

#endif