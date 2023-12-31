/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:40:57 by gongarci          #+#    #+#             */
/*   Updated: 2023/10/11 15:05:09 by gongarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
int	main()
{
	t_list *head;
	t_list *newnode = ft_lstnew(ft_strdup("tal"));
	t_list *newnode1 = ft_lstnew(ft_strdup("hola"));
	//another node 2
	t_list *newnode2 = ft_lstnew(ft_strdup("como"));
	// adding to the node1 that would be the next head
	newnode1->next = newnode2;
	//a new node 3
	t_list *newnode3 = ft_lstnew(ft_strdup("estas"));
	newnode2->next = newnode3;
	newnode3->next =newnode;

	
	
	while (!head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}