/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:50:05 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/08 10:50:05 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Change every character of a string into a zero.*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n > 0)
	{
		*i++ = '\0';
		n--;
	}
}
/*
#include<stdio.h>

int main(void)
{
    char str[] = "ABCDE";
    ft_bzero(str, sizeof (str));

    printf("%s\n", str);
    return 0;
}*/