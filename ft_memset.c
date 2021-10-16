/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:26 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/16 15:59:16 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *dest, int c, size_t count)
{
    unsigned char *ptr;
    ptr = (unsigned char *)dest;
    while(count--)
        *ptr++ = (unsigned)c;
    return(dest);
}

/*
int main()
{
    char buffer[] = "This is a test of the memset function";
    printf("After:  %s\n", ft_memset(buffer, '*', 4 )); 
}
*/