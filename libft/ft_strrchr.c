/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:36:12 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 14:36:13 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int	i;

	i = ft_strlen(str);
	while (i != -1)
	{
		if (str[i] == (char)character)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int main()
//{
//	char str[]="Hello World";
//	printf("%s", ft_strrchr(str, 'r'));
//}