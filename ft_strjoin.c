/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:20:35 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:12:33 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = i;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	char	*myarray = ft_strjoin(s1,s2);
	if (myarray != NULL)
	{
		printf("This memory does have the word %s\n",myarray);
		free(myarray);
	}
	else
	{
		printf("This memory does not have the word");
	}
	return 0;
}
*/
