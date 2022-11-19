// Applies the function f on the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
	return ;
}

// void	f(void *p)
// {
// 	char *pt = (char *)p;
// 	// ft_memset(p, 'A', ft_strlen((const char *)p));
// 	ft_strlcpy(pt, "hihii", 6);
// 	// pt = strdup("salam");
// }

// int main()
// {
// 	t_list	*n0;

// 	n0 = ft_lstnew(ft_strdup("Hello"));
// 	ft_lstadd_back(&n0, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&n0, ft_lstnew(ft_strdup("Hello")));

// 	ft_lstiter(n0, f);

// 	while(n0)
// 	{
// 		printf("%s\n", n0->content);
// 		n0 = n0->next;
// 	}
// }
