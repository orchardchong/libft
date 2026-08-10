/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:58:41 by ochong            #+#    #+#             */
/*   Updated: 2026/07/30 23:58:41 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if the small string is null, just show the big string
//start running my big string, and keep running as long as it is not the end 
// and less than the size
//is it found my small string? If yes, make sure it is less than the size, 
// keep running my small string and inside the big string, found the 
// small string
#include "libft.h"

char	*ft_strnstr(const char *s, const char *c, size_t size)
{
	size_t	is;
	size_t	jc;

	is = 0;
	jc = 0;
	if (c[jc] == '\0')
	{
		return ((char *)s);
	}
	while (s[is] != '\0' && is < size)
	{
		jc = 0;
		while ((is + jc) < size && c[jc] != '\0' && s[is + jc] == c[jc])
		{
			jc++;
		}
		if (c[jc] == '\0')
		{
			return ((char *)&s[is]);
		}
		is++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	const char s[] = "Hello, my name is Alex";
	const char c[] = "Alex";
	size_t size = 22;
	printf("The word you find is %s\n", ft_strnstr(s,c,size));
	return 0;
}