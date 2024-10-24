/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:04:13 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/24 16:12:10 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		fd;
	va_list	ap;
	int		temp;

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

/* int	main(void)
{
	char	*st;
	char	c1;
	char	c2;
	char	*st2;
	int		nb1;

	st = "test1";
	c1 = 'p';
	c2 = 'l';
	st2 = "others string";
	nb1 = 123;
		printf(" %d || %d \n", ft_printf(" %c %c ", '0', c1), printf(" %c %c ",
				'0',
				c1));
		printf(" %d || %d \n", ft_printf(" %s %s ", "hello world!", st),
			printf(" %s %s ",
				"hello world!", st));
		printf(" %d || %d \n", ft_printf(" %i %i ", INT_MIN, nb1), printf(" %i
				%i ",
				INT_MIN, nb1));
		printf(" %d || %d \n", ft_printf(" %d %d ", INT_MIN, nb1), printf(" %d
				%d ",
				INT_MIN, nb1));
		printf(" %d || %d \n", ft_printf(" %d %d ", INT_MIN, nb1), printf(" %d
				%d ",
				INT_MIN, nb1));
		printf(" %d || %d \n", ft_printf(" %d %d ", INT_MIN, nb1), printf(" %d
				%d ",
				INT_MIN, nb1));
		printf(" %d || %d \n", ft_printf(" %d %d ", INT_MIN, nb1), printf(" %d
				%d ",
				INT_MIN, nb1));
		printf(" %d || %d \n", ft_printf(" %d %d ", INT_MIN, nb1), printf(" %d
				%d ",
				INT_MIN, nb1));
	printf(" %d || %d \n", ft_printf(" %u %u ", LONG_MAX, nb1), printf(" %u %u ", LONG_MAX, nb1));
	return (0);
} */
