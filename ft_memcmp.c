/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:08:03 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/08 11:08:03 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>

int main (void)
{
    char str[]= "1234568";
    char str2[]= "1234568";
    int result;
    int result2;
    size_t n;

    n = sizeof(str);
    result = ft_memcmp(str, str2, n);
    result2 = memcmp(str, str2, n);
	printf("%d\n", result);
	printf("%d\n", result2);
    return (0);
}*/