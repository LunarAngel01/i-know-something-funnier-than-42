/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nwensing <nwensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 14:36:18 by nwensing      #+#    #+#                 */
/*   Updated: 2023/11/01 17:04:03 by nwensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	printf(%d\n", ft_memcmp(str1, str2, 7));
// }
