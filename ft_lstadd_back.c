// Adds the node ’new’ at the end of the list.
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || !new)
		return ;
	if (!(*lst))
		return (*lst = new, (void)0);
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// int main()
// {
// 	t_list	*n0;
// 	t_list	*n1;
// 	t_list	*n2;

// 	n0 = ft_lstnew("Hey");
// 	ft_lstadd_back(&n0, (n1 = ft_lstnew(" my")));
// 	ft_lstadd_back(&n1, (n2 = ft_lstnew(" friend")));
// 	while (n0 != NULL)
// 	{
// 		printf("%s", n0->content);
// 		n0 = n0->next;
// 	}
// }