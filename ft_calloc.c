/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 22:51:16 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/21 22:58:04 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *dst;

	if (!(dst = (char *)malloc(sizeof(char) * (size * count))))
		return (NULL);
	ft_memset(dst, 0, count * size);
	return (dst);
}
