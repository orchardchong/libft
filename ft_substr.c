/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 22:49:25 by ochong            #+#    #+#             */
/*   Updated: 2026/08/05 22:49:25 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		start++;
	i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


#include <stdio.h>
int	main(void)
{
	char s[] = "123456";
	unsigned int start = 2;
	size_t len = 2;
	char *myarray = ft_substr(s,start,len);
	if (myarray != NULL)
	{
		printf("This memory has the word '%s' \n !", myarray);
		free(myarray);
	}
	else
		printf("this memory is full");
	return 0;
}