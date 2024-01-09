/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:42 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 15:04:42 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compare ascii value of 2 strings.*/
int	ft_strncmp(const char *chn1, const char *chn2, int n)
{
	int	i;

	i = 0;
	while ((unsigned char)chn1[i] == (unsigned char)chn2[i]
		&& chn1[i] != '\0' && chn2[i] != '\0' && i < n - 1)
		i++;
	if (n > 0)
		return ((unsigned char)chn1[i] - (unsigned char)chn2[i]);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main (void)
{
    char chn1[]="1234";
    char chn2[]="1235";
    int n;

    n = -14651;

    printf("%d\n", ft_strncmp(chn1, chn2, n));
    printf("%d\n", strncmp(chn1, chn2, n));
    return 0;
}*/