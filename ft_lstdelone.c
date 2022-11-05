/* Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed. */

#include "libft.h"

void    del(void *content)
{
    if (!content)
        exit(0);
    free(content);
}
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        exit(0);
    del(lst->content);
}
