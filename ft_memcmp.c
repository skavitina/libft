/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:56:14 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/10 19:03:32 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

int ft_memcmp(const void *string1, const void *string2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    
    ptr1 = (unsigned char *)string1;
    ptr2 = (unsigned char *)string2;
	
    while(n--)
    {
        if(*ptr1 != *ptr2)
            return(*ptr1 - *ptr2);
        ptr1++;
		ptr2++;
    }
    return(0);
}


int main()
{
    char a[] = "ab";
    char b[] = "ac";
    
    printf("%d\n", ft_memcmp(a, b, 2));
    printf("%d", memcmp(a, b, 2));
    return(0);
}
