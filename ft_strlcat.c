#include "libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	size_t len;
	size_t i;

	len = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && (i + len < size - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	size = (size >= len) ? len : size;
	return (size + ft_strlen(src));
}
