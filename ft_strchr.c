/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:15 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:05:40 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
