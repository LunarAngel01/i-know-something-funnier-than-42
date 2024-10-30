/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 13:03:43 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/28 13:32:57 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	charprinter(int c)
{
	write(1, &c, 1);
	return (1);
}

int	procentselect(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += charprinter(va_arg(args, int));
	else if (format == 's')
		print_length += strprinter(va_arg(args, char *));
	else if (format == 'p')
		print_length += ptrprinter(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += nbrprinter(va_arg(args, int));
	else if (format == 'u')
		print_length += unsignedprinter(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += hexprinter(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += percentprinter();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += procentselect(args, str[i + 1]);
			i++;
		}
		else
			print_length += charprinter(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
