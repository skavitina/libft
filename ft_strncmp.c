/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:43 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/16 14:29:48 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *string1, const char *string2, size_t num)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    
    ptr1 = (unsigned char *)string1;
    ptr2 = (unsigned char *)string2;
    int i;

    i = 0;
    while(*ptr1 && *ptr2 && i < num)
    {
        if(ptr1[i] != ptr2[i])
            return(ptr1[i] - ptr2[i]);
        i++;
    }
    return(0);
}


/*int main()
{
    char a[] = "ab";
    char b[] = "ac";
    
    printf("%d\n", ft_strncmp(a, b, 4));
    printf("%d", strncmp(a, b, 4));
    return(0);
}*/