/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:29:49 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 18:42:58 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(char c)
{
    if(c >= 0 && c <= 255)
        return(1);
    else
        return(0);
}