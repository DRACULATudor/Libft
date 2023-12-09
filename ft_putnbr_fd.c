/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:11:49 by tlupu             #+#    #+#             */
/*   Updated: 2023/12/07 14:11:53 by tlupu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	number;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			number = n % 10 + '0';
			write(fd, &number, 1);
		}
	}
}

// int	main(void)
// {
// 	{
// 		int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
// 		if (fd == -1)
// 		{
// 			return (-1);
// 		}
// 		ft_putnbr_fd(2147483647, fd);
// 		close(fd);
// 		return (0);
// 	}
// }francine