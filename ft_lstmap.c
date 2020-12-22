/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:09:19 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/22 20:22:15 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst,
		void *(*f)(void *), void (*del)(void *))
{
	t_list *node;
	t_list *first;

	if (!(node = ft_lstnew((*f)(lst->content))))
		return (NULL);
	first = node;
	lst = lst->next;
	while (lst)
	{
		if (!(node = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, node);
		lst = lst->next;
	}
	return (first);
}
