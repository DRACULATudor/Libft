/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:16 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/07 12:35:41 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
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