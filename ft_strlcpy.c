/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:34:14 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/08 15:34:14 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copy and return the total length of the string they tried to create.*/
size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;
	char	*src1;

	i = 0;
	src1 = (char *)src;
	if (!dst && !src)
		return (dst[i]);
	while (src1[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src1[i] && (i < size - 1))
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = '\0';
	while (src1[i])
		i++;
	return (i);
}
/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[]="Azerty";
    char str2[]="123123123";
	//char *ptr = &str1[2];
	//char size = sizeof(&str1[2]);
	
    printf("%d\n", ft_strlcpy(str1, str2, sizeof(str1)));
    //printf("%s", strncpy(dest, src, sizeof(dest)));
	printf("%s", str1);
    return (0);
}*/