/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:51:04 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 19:51:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	s = (void *)ptr;
	return (s);
}
/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] ="A54";
    char str2[] ="A54";
    char *ptr = ft_memset(str, '4', sizeof (str));
    char *ptr2 = memset(str2, 'Z', sizeof (str2));

    if (ptr != NULL)
        printf("%s\n", ptr);
    if (ptr2 != NULL)
        printf("%s\n", ptr2);
    return 0;
}*/