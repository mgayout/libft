/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:44:43 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/08 14:44:43 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

int main (void)
{
    char str[]= "ABC";
    char str2[]= "DEF";
    size_t n;

    n = 2;
    char *ptr = ft_memcpy(str, str2, n);
    char *ptr2 = memcpy(str, str2, n);

    printf("%s\n", ptr);
    printf("%s\n", ptr2);
    return (0);
}*/