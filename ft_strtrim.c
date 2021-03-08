#include "libft.h"

static void	ft_insert(int i, int j, char *dst, char const *s1)
{
	int k;

	k = 0;
	while (i <= j)
	{
		dst[k] = s1[i];
		i++;
		k++;
	}
	dst[k] = '\0';
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && ft_strchr(set, s1[j]) && i < j)
		j--;
	if (!(dst = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	ft_insert(i, j, dst, s1);
	return (dst);
}
