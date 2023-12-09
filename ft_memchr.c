/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:39:39 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 14:44:43 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		if (st[i] == (char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char str[] = "ABCDEFG";
//     const int chars[] = {'D', 'd'};
//     for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
//     {
//         const int c = chars[i];
//         const char *ps = ft_memchr(str, c, strlen(str));
//         ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
//            : printf ("character '%c'(%i) not found\n", c, c);
//     }
//     return (0);
// }