/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:29:40 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/28 20:40:49 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_count_num(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long long	temp;

	temp = n;
	str = (char *)ft_calloc((ft_count_num(n) + 1) * sizeof(char), 1);
	if (str == NULL)
		return (0);
	if (temp == 0)
		str[0] = '0';
	if (temp < 0)
	{
		str[0] = '-';
		temp = temp * -1;
	}
	i = ft_count_num(n);
	while (temp != 0)
	{
		str[i - 1] = (temp % 10) + '0';
		temp = temp / 10;
		i--;
	}
	return (str);
}

// int	main(void)
// {
//     int n =  -232;
//     char *result = ft_itoa(n);
//     printf("%s", result);
//     return(0);
// }
