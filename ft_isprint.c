/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:00:32 by ochong            #+#    #+#             */
/*   Updated: 2026/07/27 18:19:25 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
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
    ft_isprint(' ');
    printf("Ans = %d\n", ft_isprint(' '));
    printf("Ans = %d\n", isprint(' '));
    return 0;
}
*/