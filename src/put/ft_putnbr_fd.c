/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 15:27:40 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/11 14:26:54 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(const int n, int fd)
{
	long	b;

	b = (long) n;
	if (b < 0)
	{
		write(fd, "-", 1);
		b *= -1;
	}
	if (b > 9)
		ft_putnbr_fd((b / 10), fd);
	b = (b % 10) + '0';
	write(fd, &b, 1);
}
