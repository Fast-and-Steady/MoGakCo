#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *tmp;

    if (!lst || !f)
        return (NULL);
    new = NULL;
    while (lst)
    {
        if (!(tmp = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, tmp);
        lst = lst->next;
    }
    return (new);
}
