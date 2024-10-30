/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ptrprinter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 11:35:29 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/28 13:56:03 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	putptr(uintptr_t num)
{
	if (num >= 16)
	{
		putptr(num / 16);
		putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ptrprinter(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	if (ptr == 0)
		return (strprinter("(nil)"));
	print_length += write(1, "0x", 2);
	putptr(ptr);
	print_length += ptr_len(ptr);
	return (print_length);
}
