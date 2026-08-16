/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 22:15:22 by ochong            #+#    #+#             */
/*   Updated: 2026/08/03 22:15:22 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((const char *)src)[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char dest[] = "hello";
	ft_memmove(dest + 1,dest,5);
	printf("after moving is: %s\n", dest);
	return 0;
}*/
//n > 0 or i < n is based on whether your + 1 is at dst or src in
//the main function 