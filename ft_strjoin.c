/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:08:12 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/22 19:44:08 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j + i] = s2[i];
		i++;
	}
	str[j + i] = '\0';
	return (str);
}

// int main()
// {
// 	char *x[20] = {"h",  "test"};
// 	char *y[20] = {"world", "ab"};
// 	char *result;
// 	int count = sizeof(x) / sizeof(x[1]);
// 	for (int i=0; i < count; i++)
// 	{
// 		result = ft_strjoin(x[i] ,y[i]);
// 		printf("%s\n", result);
// 	}

// 	// free (result);
// 	return (0);
// }