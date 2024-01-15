/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:30 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/14 16:06:30 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Bzero + malloc*/
void	*ft_calloc(size_t elcount, size_t elsize)
{
	size_t	size;
	void	*ptr;

	size = elcount * elsize;
	if (elsize && (size / elsize != elcount))
		return (NULL);
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, size);
	return (ptr);
}
/*
#include <stdio.h>

int main (void)
{
	char	ptr[]="jzbzbmz";
	char 	*copy;
	size_t	count;
	size_t	size;

	count = ft_strlen(ptr);
	size = sizeof(ptr);
	copy = ft_calloc(count, size);

	printf("%s\n", copy);
	free (copy);
	return (0);
}*/