#include "libft.h"

int	ft_lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
