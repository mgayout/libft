/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:39:17 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/06 20:39:17 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return 1 if the character is alpha.*/

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main (void)
{
    char c = '2';

    printf("%d", ft_isalpha(c));
    return (0);
}
*/