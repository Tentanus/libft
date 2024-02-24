/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:27:37 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 14:40:48 by mweverli      ########   odam.nl         */
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
 *  @return int32_t or 0 if non INT value;
 */

int32_t	ft_atoi(const char *str)
{
	long	res;
	int		sign;

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
	if (res < INT_MIN && res > INT_MAX)
		return (0);
	return ((int32_t)(sign * res));
}
