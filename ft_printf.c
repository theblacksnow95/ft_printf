/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:34 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/22 18:43:22 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int				i;
	int				fd;
	va_list			ap;
	int				temp;

	fd = 0;
	i = 0;
	temp = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			temp += ft_checkflags(format[i++], ap, fd);
			if (temp < 0)
				return (-1);
		}
		else
			temp += write(fd, &format[i], 1);
		if (temp < 0)
			return (-1);
		i++;
	}
	va_end(ap);
	return (temp);
}

/* int	main(void)
{
	char	*st;
	char	t1;
	char	extrac;
	char	*extras;

	st = "test1";
	t1 = 'p';
	extrac = 'l';
	extras = "others string";
	ft_printf("Result 'c': %c\nResult 's': %s\nOther \
	'c' example: %c\nSecond 's': %s", t1, st, extrac, extras);
	return (0);
} */
