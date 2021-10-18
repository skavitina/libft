/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:09:32 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/18 21:26:55 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*dest;
	
	i = 0;
	j = 0;
	dest = (char	*)malloc((*s) * len);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			dest[j] = s[i];
			j++;
		}
	i++;
	}
	dest[j] = 0;
	return (dest);
}

int main()
{
	char a[] = "substr function Implementation";
	int	b = 7;
	int c = 12;
	char*	dest = ft_substr(a, b, c);
	printf("%s\n", dest);
}
