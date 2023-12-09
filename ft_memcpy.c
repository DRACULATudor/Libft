/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:51:57 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/20 20:11:46 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (ft_memmove(dst, src, n));
}

//  int main () {
//    const char src[50] = "tutorialspointom";
//    char dest[50];
//    printf(" %s Heloooo!!", dest);
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);

//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);

//    return(0);
// }

// int main()
// {
//    char a[] = "aaaaaaaaaa";
//    char b[] = "bbbb";
//    // printf("%s\n", memcpy(NULL, b, 10));
//    printf("%s\n", ft_memcpy(NULL, b, 10));
//    return(0);
// }