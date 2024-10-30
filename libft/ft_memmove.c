/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:15:49 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 14:16:40 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			tmp[i] = ((unsigned char *)src)[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int main()
//{
// char str[20]="MotherFather";
// ft_memmove(str , str+6, 6)
// printf("%s", str);
// }
