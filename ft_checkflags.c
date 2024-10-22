/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:38:39 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/22 18:37:19 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkflags(char str, va_list ap, int fd)
{
	int	temp;

	temp = 0;
	if (str == 's')
	{
		temp += ft_putstr_fd_int(va_arg(ap, char const *), fd);
	}
	if (str == 'c')
	{
		temp += ft_putchar_fd_int(va_arg(ap, int), fd);
		return (1);
	}
	return (temp);
}
