#include "libft.h"

char *strchr(const char *s, int c)
{
	size_t len;
	size_t i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (c == 0)
		return (&s[i]);
	return (NULL);
}
