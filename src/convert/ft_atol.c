/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:41:28 by mweverli      #+#    #+#                 */
/*   Updated: 2022/10/17 22:59:35 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

long	ft_atol(const char *str)
{
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((long)(sign * res));
}
