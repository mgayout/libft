/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:10:01 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/07 13:10:01 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return 1 if the character is printable.*/

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main (void)
{
    char c = '2';

    printf("%d", ft_isprint(c));
    return (0);
}
*/