/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 23:14:24 by ochong            #+#    #+#             */
/*   Updated: 2026/08/09 23:14:24 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	if (*lst == NULL || new == NULL)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("bye");
	ft_lstadd_back(&node1,node2);
	printf("Node1 word is : %s\n", (char *)node1->content);
	printf("the word folliwng with Node1 is : %s\n", (char *)node1->next->content);
	return 0;
}
*/