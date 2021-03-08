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
