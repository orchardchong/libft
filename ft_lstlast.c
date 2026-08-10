/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 22:21:52 by ochong            #+#    #+#             */
/*   Updated: 2026/08/09 22:21:52 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return (NULL);
	while(lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list *word1 = ft_lstnew("hello");
	t_list *word2 = ft_lstnew("bye");

	word1->next = word2;
	t_list *lastnode = ft_lstlast(word1);
	printf("the last word is %s\n", (char *)lastnode->content);
	return 0;
}*/