/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 23:14:51 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 21:45:43 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;
	size_t	i;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc((end - start) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main(void)
{
	// Test 1: Normal behavior
	char *res1 = ft_strtrim("xxxhelloxxx", "x");
	printf("Test 1: %s\n", res1); 
	free(res1);

	// Test 2: The string is pure garbage
	char *res2 = ft_strtrim("xxxxx", "x");
	printf("Test 2: %s\n", res2); // Should print nothing (empty string)
	free(res2);

	// Test 3: Empty string trap
	char *res3 = ft_strtrim("", "x");
	printf("Test 3: %s\n", res3); // Should print nothing (empty string)
	free(res3);

	return (0);
}
*/
