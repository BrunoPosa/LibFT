/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:23:35 by bposa             #+#    #+#             */
/*   Updated: 2023/12/05 15:19:48 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11 * sizeof(char));
	}
	else if (n < 0)
	{
		n *= -1;
		write (fd, "-", sizeof(char));
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &"0123456789"[n % 10], sizeof(char));
	}
	else
		write(fd, &"0123456789"[n], sizeof(char));
}
