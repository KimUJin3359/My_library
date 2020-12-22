/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:41:23 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/22 13:41:24 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int num;
	int i;

	i = 0;
	if (n == -2147483648)
		return (12);
	else if (n == 0)
		return (2);
	if (n < 0)
		num = -n;
	else
		num = n;
	while (num)
	{
		num /= 10;
		i++;
	}
	if (n < 0)
		i++;
	i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char		*res;
	long long	num;
	int			i;
	int			len;

	i = 0;
	len = ft_len(n);
	if (!(res = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == -2147483648)
		num = 2147483648;
	else if (n > 0)
		num = n;
	else
		num = -n;
	if (n < 0)
		res[i++] = '-';
	res[--len] = '\0';
	while (i <= --len)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
