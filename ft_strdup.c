/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:31:15 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:13:35 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	length;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	ptr = (char *)malloc(length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char s[] = "hi";
	char *myarray = ft_strdup(s);
	if (myarray != NULL)
	{
		printf("You can edit the word '%s' \n !", myarray);
		free(myarray);
	}
	else
		printf("this memory is full");
	return 0;
}
*/
