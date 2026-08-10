/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:22:30 by ochong            #+#    #+#             */
/*   Updated: 2026/08/04 15:22:30 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	char s1[] = "hehehA";
	char s2[] = "heheha";
	size_t n = 8;
	printf("the difference is %d\n", ft_memcmp(s1,s2,n));
	return 0;
}
*/