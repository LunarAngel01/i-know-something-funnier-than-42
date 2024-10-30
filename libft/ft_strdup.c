/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 16:32:20 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 16:32:21 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*dest;

	i = 0;
	while (s1[i])
		i++;
	dest = (char *) malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
//{
//	char *str2;

//	char *str = "hello world";
//	str2 = ft_strdup(str);
//	printf("%s", ft_strdup(str));

//	return 0;
//}