#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	t_list *cur = *begin_list;
	t_list *prev = NULL;

	while (cur)
	{
		if (cmp(cur->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = cur->next;
			else
				prev->next = cur->next;
			t_list *temp = cur;
			cur = cur->next;
			free (temp);
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}
