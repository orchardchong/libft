/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 01:59:38 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 21:42:51 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst->next;
	}
}

/*#include <stdio.h>
void	print_tool(void *content)
{
	printf("The Inspector sees: %s\n", (char *)content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("bye");
	node1 -> next = node2;
	ft_lstiter(node1,print_tool);
	 return 0;
}*/
