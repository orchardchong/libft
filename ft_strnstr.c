/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:58:41 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:10:24 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if the small string is null, just show the big string
//start running my big string, and keep running as long as it is not the end 
// and less than the size
//is it found my small string? If yes, make sure it is less than the size, 
// keep running my small string and inside the big string, found the 
// small string
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	jlittle;

	ibig = 0;
	jlittle = 0;
	if (little[jlittle] == '\0')
	{
		return ((char *)big);
	}
	while (ibig < len && big[ibig] != '\0')
	{
		jlittle = 0;
		while ((ibig + jlittle) < len && little[jlittle] != '\0'
			&& big[ibig + jlittle] == little[jlittle])
		{
			jlittle++;
		}
		if (little[jlittle] == '\0')
		{
			return ((char *)&big[ibig]);
		}
		ibig++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const char s[] = "Hello, my name is Alex";
	const char c[] = "Alex";
	size_t size = 22;
	printf("The word you find is %s\n", ft_strnstr(s,c,size));
	return 0;
}*/