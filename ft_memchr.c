/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:16 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/16 15:59:42 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 void *ft_memchr(const	void *s, int	c, size_t	n)
 {
    unsigned char *ptr;
    unsigned char ch;
    
    ptr = (unsigned char *)s;
    ch = (unsigned char )c;

    while(n--)
    {
        if(*ptr == ch)
            return(ptr);
        ptr++;
    }
    return(NULL);
 }

/*
int main()
{
	const char a[] = "jdslkfjdl";
	int n = 'd';
	printf("%s\n", ft_memchr(a, n, 3));
	printf("%s\n", memchr(a, n, 3));
	return (0);
}
*/