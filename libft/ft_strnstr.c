/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:43:47 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:43:48 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		i = 0;
		while (big[i] == little[i] && big[i] && len - i > 0)
			i++;
		if (!little[i])
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Hello world";
// 	printf("%s\n", ft_strnstr(str, "world", 3));
// 	return 0;
// }