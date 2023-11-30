/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:06:53 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/23 17:06:53 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return a pointer to the last content of the list.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	int		i;
	int		j;

	last = lst;
	if (!last)
		return (NULL);
	i = 1;
	j = ft_lstsize(last);
	while (i != j)
	{
		last = last->next;
		i++;
	}
	return (last);
}
