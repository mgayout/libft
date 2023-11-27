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

//#include<string.h>
//#include<stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) < *(char *)(s2 + i))
			return (-1);
		else if (*(char *)(s + i) > *(char *)(s2 + i))
			return (1);
		i++;
		if ((i == n) && (*(char *)(s + i) == *(char *)(s2 + i)))
			return (0);
	}
	return (0);
}
/*
int main (void)
{
    char str[]= "128";
    char str2[]= "1281";
    int result;
    int result2;
    size_t n;

    n = 11;
    result = ft_memcmp(str, str2, n);
    result2 = memcmp(str, str2, n);

    if (result < 0)
        printf("%d", -1);
    else if (result == 0)
        printf("%d", 0);
    else
        printf("%d", 1);
    printf("\n");
        if (result2 < 0)
        printf("%d", -1);
    else if (result2 == 0)
        printf("%d", 0);
    else
        printf("%d", 1);
    return 0;
}*/