/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:41:29 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/23 11:41:29 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/*Write a number.*/
int	ft_putnbr_fd(int n, int fd)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (n < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		n = -n;
		i++;
	}
	if (n > 9)
	{
		j = ft_putnbr_fd(n / 10, fd);
		if (j == -1)
			return (-1);
		i += j;
	}
	if (ft_putchar_fd(n % 10 + '0', fd) == -1)
		return (-1);
	i++;
	return (i);
}
/*
int main (void)
{
	int	n;
	int fd;

	n = 3;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return(0);
}*/