/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:43:53 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 10:39:56 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*st1;
	char	*st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
		{
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char x[] = "hey";
// 	const char y[] = "yoy";
// 	const char z[] = "hey";
// 	const char v[] = "yoy";

// 	printf("before :%s \n", x);
// 	printf("before :%s \n", y);

// 	memcmp(x, y, 3);
// 	printf("after :%s \n", x);
// 	printf("after :%s \n", y);

// 	ft_memcmp(z, v, 3);
// 	printf("after my fct :%s \n", z);
// 	printf("after my fct :%s \n", v);
// }