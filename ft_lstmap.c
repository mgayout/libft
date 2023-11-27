/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:26:11 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/24 10:26:11 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return a copy of a list after a function has been applied to it.*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new_elem;

	if (!lst || !del || !f)
		return (NULL);
	map = NULL;
	while (lst)
	{
		new_elem = ft_lstnew((*f)(lst->content));
		if (new_elem == NULL)
			ft_lstdelone(new_elem, del);
		ft_lstadd_back(&map, new_elem);
		lst = lst->next;
	}
	return (map);
}
