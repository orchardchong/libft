/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 22:17:14 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 21:33:07 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counting_word(int s)
{
	int	box;

	box = 0;
	if (s <= 0)
	{
		box++;
	}
	while (s != 0)
	{
		s = s / 10;
		box++;
	}
	return (box);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	length = counting_word(n);
	str = (char *)malloc(length + 1);
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		length--;
		if (n < 0)
			str[length] = -(n % 10) + 48;
		else
			str[length] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char *result;
	result = ft_itoa(0);
	printf("Test 1 (0):%s\n", result);
	free(result);

	result = ft_itoa(42);
	printf("Test 2 (42):%s\n", result);
	free(result);

	result = ft_itoa(-425);
	printf("Test 3 (-425):%s\n", result);
	free(result);

	result = ft_itoa(2147483647);
	printf("Test 4 (INT_MAX):%s\n", result);
	free(result);

	result = ft_itoa(-2147483648);
	printf("Test 5 (INT_MIN):%s\n", result);
	free(result);
	return (0);
}
*/
