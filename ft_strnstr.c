/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:47:47 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/04 19:34:25 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ac, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ac[0] == '\0')
	{
		return ((char *)hay);
	}
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (ac[j] != '\0')
		{
			if ((i + j) >= len || hay[i + j] != ac[j])
				break ;
			j++;
		}
		if (ac[j] == '\0')
		{
			return ((char *)&hay[i]);
		}
		i++;
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