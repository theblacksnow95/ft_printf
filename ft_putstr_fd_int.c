/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:32:02 by emurillo          #+#    #+#             */
/*   Updated: 2024/10/22 13:03:55 by emurillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd_int(char const *str, int fd)
{
	int	ret;

	ret = 0;
	while (str[ret])
	{
		write(fd, &str[ret], 1);
		ret++;
	}
	return (ret);
}
