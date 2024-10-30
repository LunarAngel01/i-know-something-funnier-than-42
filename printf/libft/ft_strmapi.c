/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 12:48:56 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 13:31:50 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (!s)
		return (NULL);
	new_str = strnew(ft_strlen(s));
	if (!new_str)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(new_str + i) = f(i, *(s + i));
	return (new_str);
}

//char f(unsigned int i, char c)
//{
//	c = c + 1;
//return c;
//}
//int main()
//{
//	char str[] = "ABCDE";
//printf("%s", ft_strmapi(str, &f));
//}