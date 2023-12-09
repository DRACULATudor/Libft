/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:12:33 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/08 15:16:38 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_check(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*cpy;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_check(set, s1[i]) == 1)
		i++;
	start = i;
	while (ft_check(set, s1[end - 1]) == 1 && end > start)
		end--;
	cpy = ft_calloc((end - start + 1) * sizeof(char), 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (start < end)
		cpy[i++] = s1[start++];
	return (cpy);
}
// int	main(void)
// {
// 	// char str[] = "abcabcheyabc";p
// 	// char ptr[] = "abc";
// 	char *cpy = ft_strtrim(NULL, NULL);
// 	printf("%s", cpy);
// 	free(cpy);
// 	return (0);
// }