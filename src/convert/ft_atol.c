/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:41:28 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 18:18:58 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 *  @brief
 *  Will take in a char*, skip whitespace, take in '-' or '+' and only
 *  interpret numbers (ft_isdigit).
 *
 *  @warning Segfaults when given NULL.
 *  @param str
 *  @return long or 0 if non INT value;
 */

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
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if (res < LONG_MIN && res > LONG_MAX)
		return (0);
	return ((long)(sign * res));
}
