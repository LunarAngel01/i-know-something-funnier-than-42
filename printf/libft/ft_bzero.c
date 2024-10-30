/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:55:51 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 13:55:52 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

// int main()
//{
//	char str[20] = "Hello";
//	ft_bzero(str, 3);
//	printf("%c", str[3]);
//}
