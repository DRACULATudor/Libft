/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:08:21 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 14:41:22 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = count * size;
	ptr = malloc(i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, i);
	return (ptr);
}
// int main(void)
// {
//     int* p1 = ft_calloc(4, sizeof(int));
// allocate and zero out an array of 4 int
//     int* p2 = ft_calloc(1, sizeof(int[4])); // same,
// naming the array type directly
// 			int* p3 = ft_calloc(4, sizeof *p3);     // same,
// 	without repeating the type name

// 			if (p2)
// 			{
// 			  for (int n = 0; n < 4; ++n) // print the array
// 			      printf("p2[%d] == %d\n", n, p2[n]);
// 			}

// 			free(p1);
// 			free(p2);
// 			free(p3);
// 	}