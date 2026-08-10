/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:50:04 by ochong            #+#    #+#             */
/*   Updated: 2026/08/04 14:50:04 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char) c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "Hi Elyn";
	int	c = 'E';
	size_t	n = 7;
	printf("the word you found is: %s\n", (char *)ft_memchr(s,c,n));
	return 0;
}*/