#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;
	size_t i;
	size_t temp;
	size_t def;

	len = ft_strlen(s);
	i = 0;
	temp = -1;
	def = -1;
	while (i < len)
	{
		if (s[i] == (char)c)
			temp = i;
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	if (temp == def)
		return (NULL);
	return ((char *)(s + temp));
}
