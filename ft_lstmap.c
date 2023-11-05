#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_tail;

	new_head = ft_lstnew((*f)(lst->content));
	new_tail = new_head->next;
	while (lst->next)
	{
		new_tail = ft_lstnew((*f)(lst->next->content));
		ft_lstadd_back(&new_head, new_tail);
		lst = lst->next;
	}
	return (new_head);
}
