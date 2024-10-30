/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:43:10 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 14:43:12 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}

//int main()
//{
//	char str[] = "ab";
//	printf("%s \n", str);
//	ft_striteri(str, &test);
//	printf("%s", str);
//}