/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 01:18:30 by ochong            #+#    #+#             */
/*   Updated: 2026/07/28 01:18:30 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check spaces
//check symbol
//check number
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	symbol;
	int	num;

	i = 0;
	symbol = 1;
	num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			symbol = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + nptr[i] - '0';
		i++;
	}
	return (num * symbol);
}

/*int	main(void)
{
	char c[] = "  -123";
	ft_atoi(c);
	printf("num = %d\n", ft_atoi(c));
}
*/