#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *dst;

	if (!(dst = (char *)malloc(sizeof(char) * (size * count))))
		return (NULL);
	ft_memset(dst, 0, count * size);
	return (dst);
}
