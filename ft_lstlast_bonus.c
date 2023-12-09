/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:14:02 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/05 18:00:35 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		if (current->next == NULL)
			break ;
		current = current->next;
	}
	return (current);
}
// int main()
// {
// 	t_list *node;
// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (0);
//         node->content = (int*)2;
// 	node->next = NULL;
//     printf("the last node is : %p\n",node);
// 	t_list *node2;
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	if (!node2)
// 		return (0);
//     node2->content = (int*)4;
//     node2->next = NULL;

//     node->next = node2;
//     t_list *lastnode = ft_lstlast(node);

//     printf("the last node is : %p\n", lastnode);

//     free(node);
//     free(node2);

// }