/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:06:13 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/06 21:41:56 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start > (unsigned)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned)ft_strlen(s) - start)
		len = ft_strlen(s + start);
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	while (i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
// int	main(void)
// {
// 	char const s[] = "heeeey";
// 	unsigned int start = 1;
// 	size_t len = 3;
// 	char  *a = ft_substr(s, start, len);
// 	printf("your funtcion is correct: %s", a);
// 	return (0);
// }