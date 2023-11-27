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

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	i = 0;
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
/*
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