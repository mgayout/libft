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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	if (!dest && !src)
		return (NULL);
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (src1 < dest1)
	{
		while (n != 0)
		{
			n--;
			dest1[n] = src1[n];
		}
	}
	else
		ft_memcpy(dest1, src1, n);
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

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