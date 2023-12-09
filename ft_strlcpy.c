/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:02:53 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/07 12:41:16 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize >= 1)
	{
		while (src[i] != '\0' && i < destsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
//     char d[] = "heeyqqq";
//     char s[] = "ssssqqqq";
//      printf("source of s :%s", s);
//     printf("\n");
//     printf("Dest of d: %s", d);
//     printf("\n");
//     ft_strlcpy(s, d, 2);
//     printf("After my function s: %s", s);
//     printf("\n");
//     printf("After my function is d: %s", d);
//     printf("\n");
//     strlcpy(s, d, 2);
//      printf("correct: %s", s);
//     printf("\n");
//     printf("correct: %s", d);
//     return (0);
// }