// Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		exit(0);
	while (lst != NULL)
	{    
		f(lst->content);
		lst = lst->next;
	}
}
