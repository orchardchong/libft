/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:31:22 by ochong            #+#    #+#             */
/*   Updated: 2026/08/03 18:31:22 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr [i] = 0;
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char s[] = "heeheehee";
	size_t n = 6;
	ft_bzero(s,n);
	printf("the word become: %s\n", s);
	return 0;
}*/