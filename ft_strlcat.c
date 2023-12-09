/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:41:13 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/06 20:41:45 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	j = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= dstsize)
		return (dstsize + lensrc);
	else
	{
		i = lendst;
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}
// int main() {
//     char destination[20] = "Hello, ";
//     const char *source = "world!";
//     size_t destination_size = sizeof(destination);

// 	size_t result1 = ft_strlcat(destination, source, 10);
// 	printf("Result1: %s\n", destination);
// //     printf("Total characters written (excluding null-terminator): %zu\n",
// 	result1);

// 	//     size_t result = strlcat (destination, source, destination_size);

// 	//     printf("Result2: %s\n", destination);
// 	//     printf("Total characters written (excluding null-terminator): %zu\n",
// 	result);

// 	//     return (0);
// }
