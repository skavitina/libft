/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:29:26 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:03:55 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (count--)
		*ptr++ = '\0';
}
