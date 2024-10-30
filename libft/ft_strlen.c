/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:45:56 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/07 13:45:57 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
//{
//      char *str= "h";
//      if (str[1])
//          printf("here\n");
//      else
//          printf("nothing\n");
//      return (0);
//     printf("string length is: %zu\n", ft_strlen("hello"));
// }