/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:15 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/10 17:03:19 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char *ft_strchr(const char *str, int ch)
{
    while(*str)
    {
        if (*str == (char)ch)
            return ((char *)str);
        str++;
    }
    return (NULL);
}

/* int main()
{
    const char a[] = "jdslkfjdl";
    int n = 'd';
    printf("%s\n", ft_strchr(a, n));
    printf("%s\n", strchr(a, n));
    return (0);
}
*/