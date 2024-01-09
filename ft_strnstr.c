/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:51:20 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/09 11:51:20 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Search little string in big string.*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(little);
	if (j == 0)
		return ((char *)big);
	while (big[i] && (i + j <= len))
	{
		if (ft_strncmp(big + i, little, j) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>

int main (void)
{
    char str[]="Bonjour, je m'appelle Maxime.";
    char str2[]="je";
    size_t i;

    i = 20;
    printf("%s\n", ft_strnstr(str, str2, i));
    printf("%s", strstr(str, str2));
    return (0);
}*/