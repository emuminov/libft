#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_tail;
	t_list	*new_node;

	new_head = ft_lstnew((*f)(lst->content));
	new_tail = new_head;
	new_node = 0;
	while (lst->next)
	{
		new_node = ft_lstnew((*f)(lst->next->content));
		ft_lstadd_back(&new_tail, new_node);
		new_tail = new_node;
		lst = lst->next;
	}
	return (new_head);
}
