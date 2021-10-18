/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:29:26 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/17 19:35:58 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_bzero(void *dest, size_t count)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)dest;
    while(count--)
        *ptr++ = '\0';
}

int main()
{
    char a = "123";
    int b = 2;
    printf("s", ft_bzero(a, b));
    return(0);
}