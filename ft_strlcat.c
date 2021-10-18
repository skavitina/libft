/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:15:04 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/18 20:05:56 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t	dstsize)
{
	size_t	len;
	size_t	srclen;

	len = 0;
	srclen = ft_strlen ((char *)src);
	while (*dst && dstsize > 0)
	{
		dst++;
		len++;
		dstsize++;
	}
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return (srclen + len);
}

/*
int main()
{
	char a[] = "1234";
	char b[] = "234";
	printf("%zu\n", ft_strlcat(a, b, 4));
	printf("%lu", strlcat(a, b, 4));
}
*/