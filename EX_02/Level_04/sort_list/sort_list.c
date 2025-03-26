#include "list.h"


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int swap;
	int sorted;

	if (!lst)
		return (lst);
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		tmp = lst;
		while (tmp->next)
		{
			if (((*cmp)(tmp->data, tmp->next->data)) == 0)
			{
				swap = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = swap;
				sorted = 0;
			}
			tmp = tmp->next;
		}
	}
	return (lst);
}
