/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:19 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:26:57 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict	dst, const void	*restrict src, size_t	n)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if ((source == NULL) && (destination == NULL))
		return (NULL);
	while (n--)
		*destination++ = *source++;
	return (destination);
}

