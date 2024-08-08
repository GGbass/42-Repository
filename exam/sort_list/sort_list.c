#include <stdlib.h>
#include "../../subjects/list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *p1;

	if (!lst || !lst->next)
		return (lst);
	p1 = lst;
	while (lst->next != NULL)
	{
		if ((cmp(lst->data, lst->next->data)) == 0 )
		{
			//swap
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = p1;
		}
		else
			lst = lst->next;
	}
	lst = p1;
	return (lst);
}


// 9 list sorted or empty

