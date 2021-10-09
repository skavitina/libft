/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:15 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 21:37:16 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *str, int ch)
{
    char    *ptr;
    char    sym;

    ptr = (char *)str;
    sym = (char)ch;
    while(*ptr && !(*ptr == sym))
        ptr++;
    return(ptr);
    
}

#include <stdio.h>
int main(void)
{
    char str[11] = "0123456789";
    int c = '\0';
    char *ach;
    ach = ft_strchr(str,c);
    if (ach == NULL)
        printf("Символ в строке не найден\n");
    else
        printf("Искомый символ в строке на позиции # %ld\n", ach-str);
    return(0);
}