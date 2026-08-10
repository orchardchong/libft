/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 23:56:44 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 21:27:35 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	totalmemory;
	char	*ptr;

	totalmemory = n * size;
	ptr = malloc(totalmemory);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, totalmemory);
	}
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	size_t n = 5;
	size_t size = 4;
	int	*myarray = (int *)ft_calloc(n,size);
	if (myarray != NULL)
	{
		printf("Success! ft_calloc worked.\n");
		printf("The very first box contains the number: %d\n", myarray[0]);
		free(myarray);
	}
	else
	{
		printf("Fail! The Boss gave us NULL (no memory).\n");
	}
	return 0;
}
*/
