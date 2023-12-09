/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:46:25 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 10:39:16 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
// int	main(void)
// {
// 	int val;
// 	int val1;
// 	char str[20];
// 	char str1[20];

// 	strcpy(str, "98993489");
// 	val = atoi(str);
// 	printf("String value = %s, Int value = %d\n", str, val);

// 	strcpy(str, "tutorialspoint.com");
// 	val = atoi(str);
// 	printf("String value = %s, Int value = %d\n", str, val);

// 	strcpy(str, "98993489");
// 	val = ft_atoi(str);
// 	printf("String value = %s, Int value = %d\n", str, val);

// 	strcpy(str, "tutorialspoint.com");
// 	val = ft_atoi(str);
// 	printf("String value = %s, Int value = %d\n", str, val);

// 	return (0);
// }
