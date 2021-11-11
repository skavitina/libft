/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:15:04 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:06:11 by maria            ###   ########.fr       */
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
