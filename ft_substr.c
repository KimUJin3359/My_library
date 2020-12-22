/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:05:16 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/21 23:12:27 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!s)
		return (NULL);
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (ft_strlen(s) >= start)
	{
		while (i < len && s[i + start])
		{
			dst[i] = s[i + start];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
