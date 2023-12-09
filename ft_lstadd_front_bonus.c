/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:13 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/04 17:18:43 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int	main(void)
// {
// 	t_list *node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (0);
// 	node->content = "first NODE";
// 	node->next = NULL;

// 	printf("Original List:\n");
// 	printf("Node 1 Content: %s\n", (char *)(node->content));

// 	t_list *node2 = (t_list *)malloc(sizeof(t_list));
// 	if (!node2)
// 		return (0);
// 	node2->content = "Second NODE";
// 	node2->next = NULL;

// 	ft_lstadd_front(&node, node2);
// 	printf("New List:\n");
// 	printf("Node 2 Content: %s\n", (char *)(node2->content));
// 	printf("Node 1 Content: %s\n", (char *)(node->content));

// 	free(node);

// 	return (0);
// }