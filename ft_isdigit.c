/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:35:14 by ochong            #+#    #+#             */
/*   Updated: 2026/07/27 17:40:22 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    ft_isdigit('2');
    printf("Ans = %d\n", ft_isdigit('2'));
    printf("Ans = %d\n", isdigit('2'));
    return 0;
}
*/