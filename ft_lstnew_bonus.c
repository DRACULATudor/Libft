/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:22:44 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/06 21:18:51 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int main()
// {
//     int *content = (int *)malloc(sizeof(int));
//     *content = 20101;
//     t_list *node = ft_lstnew(content);
//      printf("Node Content is: %d\n", *((int *)(node->content)));
//      if(node)
//      {
//         free(node->content);
//         free(node);
//      }
//      return (0);
// }