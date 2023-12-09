/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:36:22 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 10:42:57 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i <= n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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