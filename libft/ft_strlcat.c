/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:27:11 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:27:12 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int main()
//{
//	char src[20]="World";
//	char dest[20]="Hello";
//	char srcorig[20]="World";
//	char destorig[20]="Hello";
//printf("length : %zu\nconcatenation : %s\n", ft_strlcat(dest, src, 4), dest);
//}
