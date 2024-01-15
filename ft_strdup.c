/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:10:14 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/14 16:10:14 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Copy a string with malloc*/
char	*ft_strdup(const char *source)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc((ft_strlen(source) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int main (void)
{
	char str[]="AZERTY";
	char *copy;

	copy = ft_strdup(str);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/