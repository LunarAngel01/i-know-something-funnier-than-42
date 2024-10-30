/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: niwensin <niwensin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 11:36:09 by niwensin      #+#    #+#                 */
/*   Updated: 2024/10/28 13:33:01 by niwensin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		procentselect(va_list args, const char format);
int		charprinter(int c);
int		strprinter(char *str);
int		ptrprinter(unsigned long long ptr);
int		nbrprinter(int n);
int		unsignedprinter(unsigned int n);
int		hexprinter(unsigned int num, const char format);
int		percentprinter(void);

void	putstr(char *str);
void	putptr(uintptr_t num);
int		ptr_len(uintptr_t num);
char	*uitoa(unsigned int n);
int		num_len(unsigned	int num);
void	puthex(unsigned int num, const char format);
int		hex_len(unsigned	int num);

#endif
