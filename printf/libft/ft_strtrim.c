/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 17:21:53 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 17:32:00 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;

	if (!s1 || !set)
		return (NULL);
	left = 0;
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	right = ft_strlen(s1) - 1;
	while (right > left && ft_strchr(set, s1[right]))
		right--;
	return (ft_substr(s1, left, right - left + 1));
}

// int main()
//{
//	char set[10] = "Suey";
//	char str1[] = "Chop Suey!!!";
//	printf("%s", ft_strtrim(str1, set));
// }