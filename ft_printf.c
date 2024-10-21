/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:34 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/21 18:48:46 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	va_list	ap_copy;
	int		count;

	va_start(ap, format);
	while (format[count])
	{
		if (format[count] == '%')
		{
			ft_putnbr_pf();
		}
	}
	return (0);
}
