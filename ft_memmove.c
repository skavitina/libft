/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:30:23 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 20:51:10 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove (void *destination, const void *source, size_t n) // доделать
{
    unsigned char *source;
    unsigned char *destination;
    
    source = (unsigned char *)src;
    destination = (unsigned char *)dst;
    while(count--)
        *destination++ = *source++;
    return(dst);
} 