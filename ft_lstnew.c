/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:27:34 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:42:36 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc (sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = (NULL);
	return (node);
}

/*# include <stdio.h>
int	main(void)
{
	int	content = 23;
	t_list *node1 = ft_lstnew(&content);

	if (!node1)
	{
		printf("this memory is full\n");
		return 1;
	}
	printf("Test 1 (content): %d\n", *(int *)node1->content);
	printf("Test 1 (next): %p\n", (void *)node1->next);
	
	free(node1);
	return 0;
}*/
