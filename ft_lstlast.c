#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*curr;
	t_list	*next;

	curr = lst;
	next = lst->next;
	while (next)
	{
		curr = next;
		next = curr->next;
	}
	return (curr);
}
