/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:29:17 by tpeggie           #+#    #+#             */
/*   Updated: 2021/10/09 18:29:18 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int i;
	int	negative;
	int	nb;

	i = 0;
	negative = 0;
	nb = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	if(str[i] == '-')
		negative = 1;
	if((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + ((int)str[i] - '0');
		i++;
	}
	if(negative == 1)
		return(-nb);
	else
		return(nb);
}

/*int main()
{
	char a[] = "   -93838";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
	return(0);
}
*/