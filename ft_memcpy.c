/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:19 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/18 19:58:41 by tpeggie          ###   ########.fr       */
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
	return (dst);
}

/*int main()
{
	char a[] = "1234578yuhyughug";
	char b[] = "";
	printf("%s\n", ft_memcpy(a, b, 10));
	printf("%s", memcpy(a, b, 10));
	return(0);
}
*/