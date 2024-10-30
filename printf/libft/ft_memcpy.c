/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:09:58 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:22:05 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (n > 0 && (dst != NULL || src != NULL))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// void main ()
//{
//    char    dest[20] = "hello";
//	char    src[20] = "bro";
//	ft_memcpy(dest +0, src, 7);
//	printf("%s\n", dest);
//}
