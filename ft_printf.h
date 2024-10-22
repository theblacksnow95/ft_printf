/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:20:59 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/22 17:57:47 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen_pf(char *str);
int	ft_putchar_fd_int(int c, int fd);
int	ft_putstr_fd_int(char const *str, int fd);
int	ft_checkflags(char str, va_list ap, int fd);

#endif
