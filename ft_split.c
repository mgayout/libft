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

/*Turn a string into ceveral strings seperate by a character.*/

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

char	**ft_malloc(char **tab, char const *s, char c, int nbwrd);

int		ft_countwrd(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**tab;
	int			nbwrd;

	if (!s)
		return (NULL);
	nbwrd = ft_countwrd(s, c);
	tab = malloc((nbwrd + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (ft_malloc(tab, s, c, nbwrd));
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

char	**ft_malloc(char **tab, char const *s, char c, int nbwrd)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = 0;
	h = 0;
	while (i < nbwrd)
	{
		if ((s[j] == c) || (s[j] == '\0'))
		{
			tab[i] = ft_substr(s, h, (j - h) + 1);
			tab[i][j - h] = '\0';
			if (tab[i][0] == '\0')
			{
				free (tab[i]);
				i--;
			}
			h = j + 1;
			i++;
		}
		j++;
	}
	tab[i] = NULL;
	return (tab);
}
/*
int main (void)
{
	char 	str[]="110010";
	char 	**copy;
	char 	c;
	int		i;

	c = '1';
	i = 0;
	copy = ft_split(str, c);

	while (copy[i])
	{
		printf("%s\n", copy[i]);
		free(copy[i]);
		i++;
	}
	free(copy);
	return (0);
}*/