#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t len;
	size_t i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}
