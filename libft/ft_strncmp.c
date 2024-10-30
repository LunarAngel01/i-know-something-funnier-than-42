/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:37:50 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:37:51 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n && *str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

// int main()
//{
//	char str1[] = "";
//	char str2[] = "abcdef";
//	printf("%d\n",  ft_strncmp(str1, str2, 5));
// }