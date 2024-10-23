/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:38:39 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/23 15:31:30 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkflags(char str, va_list ap, int fd)
{
	int	temp;
	int	ch;

	temp = 0;
	if (str == 's')
	{
		temp += ft_putstr_fd_int(va_arg(ap, char const *), fd);
		if (temp < 0)
			return (-1);
	}
	if (str == 'c')
	{
		temp += ft_putchar_int(va_arg(ap, int));
		if (temp < 0)
			return (-1);
	}
	if (str == '%')
		temp += ft_putchar_int('%');
	return (temp);
}
