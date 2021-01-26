/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:17:05 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/26 17:04:21 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	list = *lst;
	i = ft_lstsize(list);
	while (i--)
	{
		tmp = list;
		if (!list->next)
			*lst = NULL;
		del(list->content);
		free(list);
		list = tmp->next;
	}
}
