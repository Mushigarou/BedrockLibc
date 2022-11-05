#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int lst_len;

    tmp = NULL;
    tmp = lst;
    lst_len = 0;
    while (tmp)
    {
        tmp = tmp->next;
        lst_len++;
    }
    return (lst_len);
}
