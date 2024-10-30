/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 12:43:34 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 12:47:40 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdgt(int num)
{
	size_t	digitcnt;

	digitcnt = 1;
	while (num / 10)
	{
		num /= 10;
		digitcnt++;
	}
	return (digitcnt);
}

static long int	ft_abs(long int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int num)
{
	char		*res;
	size_t		digitcnt;
	long int	absnum;

	digitcnt = ft_countdgt(num);
	absnum = ft_abs(num);
	if (num < 0)
		digitcnt++;
	res = malloc(sizeof(char) * (digitcnt + 1));
	if (!res)
		return (NULL);
	res[digitcnt] = '\0';
	while (digitcnt--)
	{
		res[digitcnt] = absnum % 10 + '0';
		absnum /= 10;
	}
	if (num < 0)
		res[0] = '-';
	return (res);
}

// int main()
//{
//	int i;
//	i = 0;
//	printf("%s", ft_itoa(i));
// }
