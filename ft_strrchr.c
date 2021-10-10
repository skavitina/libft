/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:49 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/10 18:02:11 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int ch)
{
	int len;

	len = ft_strlen((char *)str) - 1;
	while (len >= 0)
	{
		if (str[len] == (char)ch)
			return (&((char *)str)[len]);
		len--;
	}
	return (NULL);
}

/*int main()
{
	const char a[] = "jdslkfjdl";
	int n = 'd';
	printf("%s\n", ft_strrchr(a, n));
	printf("%s\n", strrchr(a, n));
	return (0);
}
*/