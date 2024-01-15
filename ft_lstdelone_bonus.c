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

#include "libft.h"
#include <stdlib.h>

/*Remove 1 content.*/
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
