/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:34 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/23 15:22:17 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int				i;
	int				fd;
	va_list			ap;
	int				temp;

	fd = 1;
	i = 0;
	temp = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			temp += ft_checkflags(format[++i], ap, fd);
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
/*
int	main(void)
{
	char	*st;
	char	c1;
	char	c2;
	char	*st2;

	st = "test1";
	c1 = 'p';
	c2 = 'l';
	st2 = "others string";
	ft_printf(" %c ", '0');
	printf(" %d || %d ", ft_printf(" %s ", NULL), printf(" %s ", NULL));
		TEST(1, print("%c", '0'));
	TEST(2, print(" %c ", '0'));
	TEST(3, print(" %c", '0' - 256));
	TEST(4, print("%c ", '0' + 256));
	TEST(5, print(" %c %c %c ", '0', 0, '1'));
	TEST(6, print(" %c %c %c ", ' ', ' ', ' '));
	TEST(7, print(" %c %c %c ", '1', '2', '3'));
	TEST(8, print(" %c %c %c ", '2', '1', 0));
	TEST(9, print(" %c %c %c ", 0, '1', '2'));
	return (0);
} */
