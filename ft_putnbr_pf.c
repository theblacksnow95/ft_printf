/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42Ber +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:57:06 by yourlogin         #+#    #+#             */
/*   Updated: 2024/10/24 16:02:41 by yourintraname    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int fd)
{
	int		cont;
	char	num;

	cont = 0;
	if (nb == INT_MIN)
	{
		ft_putstr_fd_int("-2147483648", fd);
		return (11);
	}
	if (nb < 0)
	{
		cont += write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		cont += ft_putnbr(nb / 10, 1);
	}
	num = nb % 10 + '0';
	cont += write(fd, &num, 1);
	return (cont);
}

int	ft_putunsigned(unsigned int nb, int fd)
{
	char	num;
	int		temp;

	temp = 0;
	if (nb >= 10)
	{
		temp += ft_putnbr(nb / 10, fd);
	}
	num = nb % 10 + '0';
	temp += write(fd, &num, 1);
	return (temp);
}

/* int	main(void)
{
	int	res;

	res = ft_putnbr(-2147483647, 1);
	printf("\n%d\n", res);
	return (0);
} */
