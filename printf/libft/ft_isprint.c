/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:35:12 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 13:42:30 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

//int main()
//{
//	printf("%d", ft_isprint(128));
//}
