/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:38:53 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 15:38:53 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;
	unsigned char	cptr;

	i = 0;
	sptr = (unsigned char *)s;
	cptr = (unsigned char)c;
	while (i < n)
	{
		if (sptr[i] == cptr)
			return (&sptr[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "ABCDEFGHIJKL";
    char *ptr = ft_memchr(str, 'B', sizeof (str));
    char *ptr2 = memchr(str, 'B', sizeof (str));

    if (ptr != NULL)
        printf("%s\n", ptr);
    if (ptr2 != NULL)
        printf("%s\n", ptr2);
    return 0;
}*/