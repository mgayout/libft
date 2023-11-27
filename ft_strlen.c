/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:15:30 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 13:15:30 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return string size.*/

/*#include <stdio.h>*/
#include "libft.h"

char	ft_strlen(const char *str)
{
	char	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}
/*
int main (void)
{
    char str[]="ABCDE";

    printf("%d", ft_strlen(str));
    return (0);
}*/