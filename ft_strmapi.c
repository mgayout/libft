/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:37:00 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/21 15:37:00 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Apply a function into a string.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*copy;

	i = 0;
	len = ft_strlen(s);
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

char	ft_toupper2(unsigned int i, char s)
{
	char	str;
	if (s >= 97 && s <= 122)
		return (s - 32);
	return (str);
}

int main (void)
{
	char	str1[]="abc";
	char	*str2;

	str2 = ft_strmapi(str1, *ft_toupper2);
	printf("%s\n", str2);
	free (str2);
	return (0);
}*/