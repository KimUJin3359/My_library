/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:53:04 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/21 15:53:06 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *src, const char *find, size_t len)
{
	size_t i;
	size_t j;
	size_t f_len;

	i = 0;
	f_len = ft_strlen(find);
	if (!f_len)
		return (src);
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == find[j] && i + j < len)
		{
			if (j == f_len - 1)
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
