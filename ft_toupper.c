/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:59:33 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/21 12:34:01 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	return (c);
}

// int main() {
//     char lowercase = '4';
//     char uppercase = ft_toupper(lowercase);

//     printf("Original: %c\n", lowercase);
//     printf("Uppercase: %c\n", uppercase);

//     return (0);
// }
