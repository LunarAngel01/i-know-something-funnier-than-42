/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:33:52 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/08 14:33:53 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, sizeof(char) * ft_strlen(s));
}

// int main()
//{
//	char str[]="Hello World!";
// ft_putstr_fd(str, 0);
// }