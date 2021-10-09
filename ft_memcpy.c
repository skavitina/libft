/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:19 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 20:46:41 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t count)
{
    unsigned char *source;
    unsigned char *destination;
    
    source = (unsigned char *)src;
    destination = (unsigned char *)dst;
    while(count--)
        *destination++ = *source++;
    return(dst);
} 