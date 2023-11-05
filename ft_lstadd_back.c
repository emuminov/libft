#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	next = curr->next;
	while (next)
	{
		curr = next;
		next = curr->next;
	}
	curr->next = new;
}
