/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 01:41:38 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:08:22 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char	upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main(void)
{
	char	c[] = "hello i am Orchard";
	char	*result;
	result = ft_strmapi(c, &upper);
	if (result == NULL)
	{
		printf("It doesnt have the memory\n");
		return (1);
	}
	printf("The original string is: %s\n", c);
	printf("The mutated string is: %s\n", result);
	free(result);
	return (0);
}
*/
