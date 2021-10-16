/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:23 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/16 15:57:04 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
   unsigned char temp[len];
   
   ft_memcpy(temp, src, len);
   ft_memcpy(dst, temp, len);
   return(dst);
}

/*int main()
{
    char a[] = "привет";
    char b[] = "при";
    printf("%s\n", ft_memmove(a, b, 4));
    printf("%s", memmove(a, b, 3));
    return(0);
}*/