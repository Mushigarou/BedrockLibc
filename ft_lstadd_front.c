// Adds the node ’new’ at the beginning of the list.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && *lst)
		new->next = *lst;
	*lst = new;
}

// #include<stdio.h>
// int main()
// {
// 	t_list *t1 = ft_lstnew("Hello ");
// 	t_list *t2 =ft_lstnew("World");
// 	t_list *t3 = ft_lstnew("!\n");	
// 	t_list *tmp;
// 	ft_lstadd_front(&t3, t2);
// 	ft_lstadd_front(&t2, t1);
// 	tmp = t1;
// 	while(tmp)
// 	{
// 		printf("%s", (char *)tmp->content);
// 		tmp=tmp->next;
// 	}
// }