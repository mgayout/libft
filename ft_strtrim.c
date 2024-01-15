/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:49:57 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/15 15:49:57 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Remove character choose at beginning and end of a string.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*copy;

	start = (char *)s1;
	end = start + ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (*start && ft_strchr((char *)set, *start))
	{
		start++;
	}
	while (*end && ft_strchr((char *)set, *end))
	{
		end--;
	}
	copy = ft_substr(start, 0, (end - start) + 1);
	if (!copy)
		return (NULL);
	return (copy);
}
/*
#include <stdio.h>

int main (void)
{
	char str[]="          ";
	char set[]=" ";
	char *copy;

	copy = ft_strtrim(str, set);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/