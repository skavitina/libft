/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:15:04 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 14:54:10 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen ((char *)dst);
	srclen = ft_strlen ((char *)src);
	while (*dst && dstsize > 0)
	{
		dst++;
		dstlen++;
		dstsize++;
	}
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return (srclen + dstlen);
}
