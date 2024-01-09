/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:33:35 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 14:33:35 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Return a string from the last character choose to the end.*/
char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>

int main (void)
{
    char str[]="AEBCDEFGHIJKEL";
    int c;

    c = 'E';
    printf("%s\n", ft_strrchr(str, c));
    printf("%s\n", strrchr(str, 'E'));
    return 0;
}*/