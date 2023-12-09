/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:33:35 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/06 21:43:08 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
