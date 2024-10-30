/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 16:32:52 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 16:32:53 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size < 1 || count < 1)
	{
		size = 0;
		count = 1;
	}
	if (size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main(void)
//{
//	char *str;
//	str = ft_calloc(5, sizeof(char));
//	str = "ab";
//	printf("%s", str);
//	return 0;
// }
