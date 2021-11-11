#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		lens1;
	int		lens2;

	i = 0;
	j = 0;
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(s1) * (lens1 + lens2 + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[j] = 0;
	return (str);
}
