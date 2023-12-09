/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:03:26 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/17 20:22:37 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;
	size_t	i;

	s = (char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
//     char *str;
//     str = (char*)malloc(5);

//     str = ft_memset(str, ' ', 5);
//     printf("%s", str);
//     printf("\n");

//     memset(str, 'x', 5);
//     printf("%s", str);
//     return (0);
// }