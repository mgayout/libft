/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:36:04 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/23 11:36:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/*Write a string.*/
int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	return (write(fd, s, ft_strlen(s)));
}
/*
int main (void)
{
	char str[]='ABC';
	int fd;

	fd = 1;
	ft_putstr_fd(str, fd);
	return (0);
}*/