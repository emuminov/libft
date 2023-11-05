#include "libft.h"

/* t_list	*end;

if (!lst || !new)
return ;
if (!(*lst))
{
	*lst = new;
	return ;
}
end = ft_lstlast(*lst);
end->next = new; */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
