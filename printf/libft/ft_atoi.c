/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 16:27:58 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 12:38:38 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	s;
	int	r;

	while (isspace(*nptr))
		nptr++;
	s = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s *= -1;
		nptr++;
	}
	r = 0;
	while (ft_isdigit(*nptr))
		r = r * 10 + *nptr++ - '0';
	return (r * s);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_atoi("--+10"));
// 	return (0);
// }
