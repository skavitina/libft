/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:49 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:06:59 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int ch)
{
	int	len;

	len = ft_strlen((char *)str) - 1;
	while (len >= 0)
	{
		if (str[len] == (char)ch)
			return (&((char *)str)[len]);
		len--;
	}
	return (NULL);
}
