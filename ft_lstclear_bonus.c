/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:13:26 by mgayout           #+#    #+#             */
/*   Updated: 2023/11/24 10:13:26 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Remove content from pointer to the end.*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clean;

	while (*lst != NULL)
	{
		clean = *lst;
		*lst = (*lst)->next;
		(*del)(clean->content);
		free(clean);
	}
}
