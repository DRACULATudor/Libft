/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:06:02 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/19 16:07:52 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sour;
	char	*dest;
	size_t	i;

	sour = (char *)src;
	dest = (char *)dst;
	if (sour > dest)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = sour[i];
			i++;
		}
	}
	else if (sour < dest)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = sour[i - 1];
			i--;
		}
	}
	return (dst);
}

//  int main()
//  {
// 	char dest[] = "oldstring";
//    const char src[]  = "newstring";

// 	printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After ft_memmove dest = %s, src = %s\n", dest, src);

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
//  }