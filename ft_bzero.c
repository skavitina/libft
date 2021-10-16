/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:29:26 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 20:03:47 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *dest, size_t count)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)dest;
    while(count--)
        *ptr++ = '\0';
}