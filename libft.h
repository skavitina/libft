/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:33 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 12:07:30 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>

int			t_atoi(char	*str);
void		ft_bzero(void	*dest, size_t	count);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memset(void	*dest, int c, size_t	count);
char		*ft_strchr(const char	*str, int ch);
int			ft_strlen(char	*str);
char		*ft_strrchr(const char	*str, int ch);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp(const char	*string1, \
const char	*string2, size_t	num);
void		*ft_memcpy(void *restrict	dst, const void *restrict	src, size_t n);
void		*ft_memmove(void	*dst, const void	*src, size_t	len);
size_t		ft_strlcat(char *restrict	dst, \
const char 	*restrict	src, size_t	dstsize);
size_t		ft_strlcpy(char *restrict	dst, \
const char 	*restrict	src, size_t	dstsize);
void		*ft_memchr(const	void	*s, int c, size_t	n);
int			ft_memcmp(const void	*string1, const void	*string2, size_t	n);
char		*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
void		*ft_calloc(size_t	count, size_t	size);
char		*ft_substr(char const	*s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const	*s1, char const	*set);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		**ft_split(char const *s, char c);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strdup(const char	*s1);

#endif