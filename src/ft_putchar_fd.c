/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:39:38 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/21 18:39:38 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/*Write a character.*/
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
/*
int main (void)
{
	char	c;
	int		fd;

	c = 1;
	fd = 1;
	ft_putchar_fd(c, fd);
}*/