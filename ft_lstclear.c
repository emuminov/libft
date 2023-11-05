#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	next = curr->next;
	while (next)
	{
		ft_lstdelone(curr, del);
		curr = next;
		next = curr->next;
	}
	*lst = 0;
}
