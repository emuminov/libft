#include "libft.h"

static t_list	*ft_apply(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*node_content;

	node_content = (*f)(lst->content);
	node = ft_lstnew(node_content);
	if (!node)
	{
		(*del)(node_content);
		return (0);
	}
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_tail;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	new_head = ft_lstnew((*f)(lst->content));
	if (!new_head)
		return (0);
	new_tail = new_head;
	while (lst->next)
	{
		node = ft_apply(lst->next, f, del);
		if (!node)
		{
			ft_lstclear(&new_head, del);
			return (0);
		}
		ft_lstadd_back(&new_tail, node);
		new_tail = node;
		lst = lst->next;
	}
	return (new_head);
}
