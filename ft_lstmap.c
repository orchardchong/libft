/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:15:06 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:41:34 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*newcontent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (newnode == NULL)
		{
			del(newcontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

/*void	*modify_content(void *content)
{
	char	*original;
	char	*new_str;
	int		i;

	original = (char *)content;
	i = 0;
	while (original[i])
		i++;
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	while (original[++i])
		new_str[i] = original[i];
	new_str[i] = '\0';
	new_str[0] = 'Z';
	return ((void *)new_str);
}

// 2. The 'del' function: Frees dynamically allocated content
void	del(void *content)
{
	free(content);
}*/

/*#include <stdio.h>
int main(void)
{
	// Build the original list
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("world");
	node1->next = node2;
	printf("Original List: %s -> %s\n", (char *)node1->content,
       	(char *)node1->next->content);
	// Run ft_lstmap
	t_list *new_list = ft_lstmap(node1, modify_content, del);

	if (new_list)
	{
		printf("New List:      %s -> %s\n", (char *)
		new_list->content, (char *)new_list->next->content);
	}
	return (0);
}
*/
