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

/*Change every character of a string into a zero.*/

//#include<stdio.h>
//#include<strings.h>
#include "libft.h"

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
int main(void)
{
    char str[] = "ABCDE";
    ft_bzero(str, sizeof (str));
    //bzero(str, sizeof (str));

    printf("%s\n", str);
    return 0;
}*/