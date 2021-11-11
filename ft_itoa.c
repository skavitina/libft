#include "libft.h"


int	ft_znak(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

int	ft_len_num(int n)
{
	int	count;

	if (ft_znak(n) < 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		znak;

	count = ft_len_num(n);
	znak = ft_znak(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[count] = '\0';
	while (n != 0)
	{
		str[--count] = (char)((n % 10) * znak + '0');
		n = n / 10;
	}
	count--;
	if (znak < 0)
		str[count] = '-';
	return (str);
}
