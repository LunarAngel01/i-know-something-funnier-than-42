/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:50:28 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 13:55:43 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// int main()
// {
// char str[15];
// ft_memset(str, 't', 5);
// printf("%s", str);
//}
