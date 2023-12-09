/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:37:39 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 17:31:26 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// #include <string.h>

int	ft_words(char *s, char c)
{
	int	i;
	int	word;
	int	flag;

	i = 0;
	word = 0;
	flag = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (flag == 0 && s[i] != c)
		{
			word++;
			flag = 1;
		}
		if (s[i] == c)
			flag = 0;
		i++;
	}
	return (word);
}

int	ft_wordslength(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	*ft_strgen(char *s, char c)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)malloc(ft_wordslength((char *)s, c) + 1);
	if (d == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	ft_free(char **ptr, char *str)
{
	int	index;
	int	errorcode;

	index = 0;
	errorcode = 0;
	if (str == NULL)
	{
		while (ptr[index])
		{
			free(ptr[index]);
			index++;
		}
		free(ptr);
		errorcode = 1;
	}
	return (errorcode);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		index;

	i = 0;
	index = 0;
	str = (char **)malloc((ft_words((char *)s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[index] = ft_strgen((char *)(s + i), c);
			if (ft_free(str, str[index]) == 1)
				return (NULL);
			i = i + ft_wordslength((char *)(s + i), c);
			index++;
		}
		else
			i++;
	}
	str[index] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char	x[] = "hey there how are you";
// 	char	c;
// 	char	**result;
// 	int		i;

// 	c = ' ';
// 	result = ft_split(x, c);
// 	i = 0;
// 	// while (result[i])
// 	// {
// 	// 	printf("the string %d has this addres %p\n", i, result[i]);
// 	// 	i++;
// 	// }
// 	if (result == NULL)
// 	{
// 		printf("Error in ft_split\n");
// 		//return (1);
// 	}
// 	// for (int i = 0; i < 5; i++)
// 	// {
// 	// 	printf("$%s$\n", result[i]);
// 	// }
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		//result[i] = NULL;
// 		i++;
// 	}
// 	free(result);
// 	//result = NULL;
// 	return (0);
// }
