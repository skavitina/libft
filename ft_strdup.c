
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *str;
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(char *)s1;
	if (!s1)
		return(NULL);
	if (!str)
		return(NULL);
	str = (char *)malloc(sizeof(len + 1));
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return(str);
}