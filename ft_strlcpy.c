/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:23:51 by ochong            #+#    #+#             */
/*   Updated: 2026/07/28 21:23:51 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}

#include <stdio.h>
int main(void)
{
	char des[] = "";
	char src[] = "HelloHello";
	printf("The return value (src length) is: %zu\n", ft_strlcpy(des, src, 11));
	printf("The text inside the destination is: %s\n", des);
	return(0);
}

