/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:33 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/16 15:46:04 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void ft_bzero(void *dest, size_t count);
int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
void *ft_memcpy(void *dst, const void *src, size_t count);
void *ft_memmove (void *destination, const void *source, size_t n);
void *ft_memset(void *dest, int c, size_t count);
char *ft_strchr(const char *str, int ch);
int ft_strlen(char  *str);
char *ft_strrchr(const char *str, int ch);
int ft_tolower(int  c);
int ft_toupper(int  c);
int ft_strncmp(const char *string1, const char *string2, size_t num);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif