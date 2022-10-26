/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 15:23:55 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/14 20:09:06 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (!s)
		ft_putstr_fd("(NULL)", fd);
	else
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
