/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:10:50 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/06 21:40:46 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	s2 = (char *)malloc((i + 1) * sizeof(char));
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";

//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* target = ft_strdup(source);

//     printf("%s", target);
//     return (0);
// }
