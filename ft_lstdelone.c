/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 00:31:02 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 00:31:02 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	del(lst -> content);
	free(lst);
}

void	del (void * content)
{
	(void)content;
}

/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("bye");
	node1 -> next = node2;
	printf("the nodes appear are : %s ,  %s\n",(char *)node1 ->content, (char *)node1 -> next -> content);
	ft_lstdelone(node2,del);
	node1 -> next = NULL;
	printf("the only node appear is : %s\n", (char *)node1 ->content);
	return 0;
}*/