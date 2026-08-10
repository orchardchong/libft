/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 01:17:19 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 01:17:19 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return;
	while (*lst != NULL)
	{
		tmp = (*lst) -> next;	
		del((*lst) -> content);
		free(*lst);
		*lst = tmp;
	}
}

/*void	del (void * content)
{
	(void)content;
}*/

/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = ft_lstnew("haha");
	t_list *node2 = ft_lstnew("hehe");
	t_list *node3 = ft_lstnew("hoho");

	node1 ->next = node2;
	node2 ->next = node3;
	printf("total word are: %s %s %s\n", (char *)node1->content,
	 (char *)node1->next->content, (char *)node1->next->next->content);
	ft_lstclear(&node1, del);
	if (node1 == NULL)
	{
		printf("SUCCESS! It is completely empty (NULL).\n");
	}
	else
	{
		printf("CRASH: Uh oh, something survived...\n");
	}
	return (0);
}*/