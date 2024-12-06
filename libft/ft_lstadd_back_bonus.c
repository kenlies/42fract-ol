#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (current->next)
				current = current->next;
			current->next = new;
		}
	}
}
