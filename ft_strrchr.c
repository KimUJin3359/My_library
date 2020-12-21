#include "libft.h"

char *strrchr(const char *s, int c)
{
	size_t len;
	size_t i;
	size_t temp;

	len = ft_strlen(s);
	i = 0;
	temp = -1;
	while (i < len)
	{
		if (s[i] == (char)c)
			temp = i;
		i++;
	}
	if (c == 0)
		return (&s[i]);
	if (temp == -1)
		return (NULL);
	return (&s[temp]);
}
