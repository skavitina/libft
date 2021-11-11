/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:19 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 22:33:55 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void	*src, size_t	n)
{
	char		*d;
	const char	*s;
	
	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

