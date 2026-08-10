/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 23:21:00 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:16:47 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlength;
	size_t	slength;
	size_t	i;

	i = 0;
	dlength = 0;
	slength = ft_strlen(src);
	while (dst[dlength] != '\0' && dlength < size)
	{
		dlength++;
	}
	if (size <= dlength)
	{
		return (size + slength);
	}
	while (src[i] != '\0' && dlength + i < size - 1)
	{
		dst[dlength + i] = src[i];
		i++;
	}
	dst[dlength + i] = '\0';
	return (dlength + slength);
}

/*#include <stdio.h>
int	main(void)
{
	char dst[10] = "hello";
	const char src[] ="bye";
	size_t size = 10;
	printf("dst = %ld\n", ft_strlcat(dst,src,size));
	return 0;
}
*/
