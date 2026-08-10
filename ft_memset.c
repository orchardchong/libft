/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:30:43 by ochong            #+#    #+#             */
/*   Updated: 2026/08/01 16:30:43 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr [i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char s[] = "heeheehee";
	int	c = '.';
	size_t n = 6;
	ft_memset(s,c,n);
	printf("the word become: %s\n", s);
	return 0;
}
*/