/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:23:01 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 21:36:52 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = ft_lstnew("World");
	t_list *node2 = ft_lstnew("Hello");
	ft_lstadd_front(&node1,node2);
	printf("Front Car: %s\n", (char *)node1->content);
	printf("Second Car: %s\n", (char *)node1->next->content);
	return 0;
}
*/
