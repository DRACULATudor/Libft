/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:19:31 by tlupu             #+#    #+#             */
/*   Updated: 2023/11/29 11:51:36 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>
// #include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(void)
// {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
//     if (fd == -1) {
//         perror("Error opening file");
//         return (1);
//     }
//     ft_putchar_fd('A', fd);
//     close(fd);
//     return (0);
// }