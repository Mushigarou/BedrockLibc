/* Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *p)
// {
// 	free(p);
// }

// int main()
// {
// 	t_list	*n0;
// 	t_list	*n1;
// 	t_list	*n2;

// 	n0 = ft_lstnew("Hey");
// 	ft_lstadd_back(&n0, n1 = ft_lstnew(strdup(" My")));
// 	ft_lstadd_back(&n1, n2 = ft_lstnew(strdup(" MAN")));

// 	ft_lstdelone(n1, free);
// 	while(n0)
// 	{
// 		printf("%s", n0->content);
// 		n0 = n0->next;
// 	}
// }
