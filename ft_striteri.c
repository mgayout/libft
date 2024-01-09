/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:25:15 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/21 16:25:15 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Apply a function into a string.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_toupper2(unsigned int i, char *s)
{
	if (*s >= 97 && *s <= 122)
		*s -= 32;
}

int main (void)
{
	char	str1[]="abc";

	ft_striteri(str1, *ft_toupper2);
	printf("%s\n", str1);
	return (0);
}*/