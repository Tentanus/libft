/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:27:37 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/10 19:31:06 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	long	n;

	n = ft_atol(str);
	if (n >= INT_MIN && n <= INT_MAX)
		return ((int)n);
	errno = 34;
	return (0);
}
