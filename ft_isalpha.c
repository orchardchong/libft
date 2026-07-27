/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:05:45 by ochong            #+#    #+#             */
/*   Updated: 2026/07/27 17:31:29 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
    ft_isalpha('b');
    printf("Ans = %d\n", ft_isalpha('b'));
    printf("Ans = %d\n", isalpha('b'));
    return 0;
}
*/