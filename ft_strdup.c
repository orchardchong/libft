/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:31:15 by ochong            #+#    #+#             */
/*   Updated: 2026/08/05 18:31:15 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	ptr = (char *)malloc(length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < length)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	char s[] = "hi";
	char *myarray = ft_strdup(s);
	if (myarray != NULL)
	{
		printf("This memory has the word '%s' \n !", myarray);
		free(myarray);
	}
	else
		printf("this memory is full");
	return 0;
}
