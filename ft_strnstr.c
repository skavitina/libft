/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:46 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 11:06:51 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_len;
	char	*hs;
	char	*ndl;

	ndl = (char *)needle;
	needle_len = ft_strlen (ndl);
	hs = (char *)haystack;
	if (needle_len > len)
		return (NULL);
	if (len == 0)
		return (hs);
	while (*hs && len--)
	{
		if (ft_strncmp(hs, ndl, len) == 0)
			return (hs);
		hs++;
	}
	return (NULL);
}
