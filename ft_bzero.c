/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:21:51 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/19 16:09:33 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		st[i] = 0;
		i++;
	}
}
// int main()
// {
//     char str [] = "hey";

//     ft_bzero(str,1);
//     printf("%s", str);
//     printf("\n");

//     bzero(str,1);
//     printf("%s", str);
//     return (0);
// }