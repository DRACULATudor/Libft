/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:38:59 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 12:08:06 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
//     int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC , 0666);
//     if(fd == -1)
//     {
//         return(-1);
//     }
//     ft_putstr_fd("hey man this is succcsesfully written in the file", fd);
//     close(fd);
//     return(0);
// }
