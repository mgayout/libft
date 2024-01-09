/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:00:40 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 14:00:40 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Return a string from the character choose to the end.*/
char	*ft_strchr(char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>

int main (void)
{
    char str[]="ABCDEFGHIJKL";
    int c;

    c = 'E';
    printf("%s\n", ft_strchr(str, c));
    printf("%s\n", strchr(str, c));
    return 0;
}*/