/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:36:28 by ochong            #+#    #+#             */
/*   Updated: 2026/08/09 20:36:28 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	t_list *node1 = ft_lstnew("World");
	t_list *node2 = ft_lstnew("Hello");

	node1->next = node2;
	int	total_node = ft_lstsize(node1);
	printf("You have total : %d node \n", total_node);
	return 0;
}*/