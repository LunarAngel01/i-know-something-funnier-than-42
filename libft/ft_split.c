/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 17:32:57 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 12:37:49 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdcnt(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*ft_split_memcheck(char **split, size_t i)
{
	if (!split[i])
	{
		while (i > 0)
			free(split[--i]);
		free(split);
		return (NULL);
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;

	res = (char **)malloc(sizeof(char *) * (ft_wrdcnt(s, c) + 1));
	if (!res || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			continue ;
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		else
			len = ft_strchr(s, c) - s;
		res[i++] = ft_substr(s, 0, len);
		if (!ft_split_memcheck(res, i - 1))
			return (NULL);
		s += len;
	}
	res[i] = NULL;
	return (res);
}

// int main()
//{
//	int i;
//	char **arr;
//	i = 0;
//	arr = ft_split("Exit light   Enter night", '   ');
//	while (arr[i])
//	{
//		printf("%s\n", arr[i]);
//		i++;
//	}
// }