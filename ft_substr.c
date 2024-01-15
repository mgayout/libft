/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:21:10 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/15 14:21:10 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Return a new string, beginning at start index.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	copy = malloc(len + 1 * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
/*
#include <stdio.h>

int main (void)
{
	char str[]="AZERTY";
	char *copy;
	unsigned int	i;
	size_t len;

	i = 4;
	len = 5;
	copy = ft_substr(str, i, len);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/