/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:59:44 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/08 14:59:44 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
		return (dest);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char str[]= "ABCDEFGHIJKL";
    char str2[]= "1234";
    char *ptr3 = &str[4];
    size_t n;

    n = sizeof(&str[4]);
    char *ptr = ft_memmove(&str[3], ptr3, n);
    char *ptr2 = memmove(&str[3], ptr3, n);

    printf("%s\n", str);
    printf("%s\n", ptr);
    printf("%s\n", ptr2);
    return (0);
}*/