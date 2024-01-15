/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:21:30 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/16 13:21:30 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free(char **tab, int i);

int			ft_countwrd(char const *s, char c);

/*Turn a string into ceveral strings seperate by a character.*/
char	**ft_split(char const *s, char c)
{
	char		**tab;
	int			nbwrd;
	const char	*start;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	nbwrd = ft_countwrd(s, c);
	tab = malloc((nbwrd + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < nbwrd)
	{
		while (*s && *s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		tab[i] = ft_substr(start, 0, s - start);
		if (!tab[i++])
			return (ft_free(tab, i - 1));
	}
	tab[i] = NULL;
	return (tab);
}

int	ft_countwrd(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static char	**ft_free(char **tab, int i)
{
	while (tab[--i] && i >= 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	char 	str[]="110010";
	char 	**copy;
	int		i;

	i = 0;
	copy = ft_split("hello!", ' ');
	while (copy[i] != NULL)
	{
		printf("%s\n", copy[i]);
		free(copy[i]);
		i++;
	}
	free(copy);
	return (0);
}*/