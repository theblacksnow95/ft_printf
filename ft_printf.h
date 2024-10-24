/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:12:28 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/24 16:12:42 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *format, ...);
int			ft_strlen_pf(char *str);
int			ft_putchar_int(int c);
int			ft_putstr_fd_int(char const *str, int fd);
int			ft_checkflags(char str, va_list ap, int fd);
int			ft_putnbr(int nb, int fd);
int			ft_putunsigned(unsigned int nb, int fd);

#endif
