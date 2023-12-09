/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:23:05 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/04 19:38:05 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	t_list *node;
// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (0);
// 	node->next = NULL;
// 	t_list *node2;
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	if (!node2)
// 		return (0);
// 	node2->next = NULL;
// 	t_list *node3;
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	if (!node3)
// 		return (0);
// 	node3->next = NULL;

// 	node->next = node2;
// 	node2->next = node3;

// 	int size = ft_lstsize(node);

// 	printf("the number of nodes is : %d\n", size);

// 	free(node);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }