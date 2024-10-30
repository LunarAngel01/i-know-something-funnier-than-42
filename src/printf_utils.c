/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf_utils.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 11:42:53 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/28 13:31:00 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	strprinter(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	nbrprinter(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = strprinter(num);
	free(num);
	return (len);
}

int	percentprinter(void)
{
	write(1, "%", 1);
	return (1);
}
