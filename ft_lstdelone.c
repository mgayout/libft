/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:56:51 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/24 09:56:51 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Remove 1 content.*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*delone;

	delone = lst;
	if (!lst)
		return ;
	lst = lst->next;
	(*del)(delone->content);
	free(delone);
}
