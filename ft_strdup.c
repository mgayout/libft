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

/*Copy a string with malloc*/

#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*copy;
	int		i;

	i = (ft_strlen(source) + 1);
	copy = malloc(i * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, source, i);
	copy[i] = '\0';
	return (copy);
}
/*
int main (void)
{
	char str[]="AZERTY";
	char *copy;

	copy = ft_strdup(str);
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/