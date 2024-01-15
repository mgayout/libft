/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:31:40 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/21 11:31:40 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_countint(int n);

/*Turn an "int" into a string.*/
char	*ft_itoa(int n)
{
	char	*copy;
	long	nb;
	int		sign;
	int		size;

	nb = n;
	sign = 0;
	if (n < 0)
	{
		nb *= -1;
		sign = 1;
	}
	size = ft_countint(n) + sign;
	copy = malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	copy[size] = '\0';
	while (size > 0)
	{
		copy[--size] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign == 1)
		copy[size] = '-';
	return (copy);
}

int	ft_countint(int n)
{
	int	a;

	a = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		a++;
	}
	return (a);
}
/*
#include <stdio.h>

int main (void)
{
	int	n;
	char *copy;

	n = -2147483648;
	copy = ft_itoa(n);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/