/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:28:03 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/15 15:28:03 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Turn 2 strings into 1.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 || !s2)
		return (NULL);
	copy = malloc(i * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, i);
	ft_strlcat(copy, s2, i);
	return (copy);
}
/*
#include <stdio.h>

int main (void)
{
	char str1[]="AZE";
	char str2[]="RTY";
	char *copy;

	copy = ft_strjoin(str1, str2);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/