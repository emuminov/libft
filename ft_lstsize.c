#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	l;
	t_list	*curr;

	l = 0;
	curr = lst;
	while (curr)
	{
		curr = curr->next;
		l++;
	}
	return (l);
}
