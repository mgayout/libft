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

/*Apply a function into a string.*/

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_toupper2(unsigned int i, char *s)
{
	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
}
/*
int main (void)
{
	char	str1[]="abc";

	ft_striteri(str1, *ft_toupper2);
	printf("%s\n", str1);
	return (0);
}*/