/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:05:30 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 13:05:30 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return 1 if the character is an ascii value.*/

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main (void)
{
    char c = 'z';

    printf("%d", ft_isascii(c));
    return (0);
}*/