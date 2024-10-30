/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:19:12 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:21:46 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

//int main()
//{
//	char dest[20] = "12";
//	char src[20] = "aaa";
//	printf("len: %ld\ndest: %s\n", ft_strlcpy(dest, src, 3), dest);
//}