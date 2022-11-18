/*Returns the last node of the list.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list	*n0;

// 	n0 = ft_lstnew("hey");
// 	ft_lstadd_back(&n0, ft_lstnew("ma"));
// 	ft_lstadd_back(&n0, ft_lstnew("mb"));
// 	ft_lstadd_back(&n0, ft_lstnew("mc"));
// 	ft_lstadd_back(&n0, ft_lstnew("md"));

// 	printf("%s", (ft_lstlast(n0))->content);
// }