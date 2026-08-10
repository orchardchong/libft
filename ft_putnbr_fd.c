/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochong <ochong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:10:13 by ochong            #+#    #+#             */
/*   Updated: 2026/08/10 22:35:29 by ochong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}

/*int main(void)
{
	// Test 1: Zero
	write(1, "Zero (0): ", 10);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	// Test 2: Single digit positive
	write(1, "Single positive (7): ", 21);
	ft_putnbr_fd(7, 1);
	ft_putchar_fd('\n', 1);

	// Test 3: Single digit negative
	write(1, "Single negative (-5): ", 22);
	ft_putnbr_fd(-5, 1);
	ft_putchar_fd('\n', 1);

	// Test 4: Standard positive multi-digit
	write(1, "Positive (4242): ", 17);
	ft_putnbr_fd(4242, 1);
	ft_putchar_fd('\n', 1);

	// Test 5: Standard negative multi-digit
	write(1, "Negative (-53423): ", 19);
	ft_putnbr_fd(-53423, 1);
	ft_putchar_fd('\n', 1);

	// Test 6: INT_MAX
	write(1, "INT_MAX (2147483647): ", 22);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	// Test 7: INT_MIN (The ultimate test!)
	write(1, "INT_MIN (-2147483648): ", 23);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
