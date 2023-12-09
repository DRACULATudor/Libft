/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:30:31 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/14 19:39:41 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
// int main() {
//     char lowercase = 'A';

//     char uppercase2 = 'Z';
//     char lowercase2 = ft_tolower(uppercase2);

//     printf("Original: %c\n", lowercase);
//     printf("Lowercase: %c\n", lowercase2);

//     return (0);
// }
