#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	if (temp)
	{
		while (temp)
		{
			*lst = temp->next;
			del(temp->content);
			free(temp);
			temp = *lst;
		}
	}
}
