/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:26 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:03:42 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*dest, int c, size_t	count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (count--)
		*ptr++ = (unsigned)c;
	return (dest);
}
