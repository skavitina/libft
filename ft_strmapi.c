#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen((char *)s);
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
