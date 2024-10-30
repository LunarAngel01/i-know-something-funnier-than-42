/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hexprinter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 11:35:41 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/28 13:36:03 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hex_len(unsigned	int num)
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

void	puthex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		puthex(num / 16, format);
		puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	hexprinter(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		puthex(num, format);
	return (hex_len(num));
}
