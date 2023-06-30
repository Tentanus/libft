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

/*	ft_atol
 *		str		string literal containing a number
 *
 * Function:
 * ft_atol will take in a string, skip whitespace, take in a '-' or '+' and only
 * interpret a number. It will return the number read from the string, if it is
 * an integer value. If the number is outside the LONG range, the number returns
 * "0".
 *
 * RETURN VALUES:
 * [LONG]	Values contained in the str including 0.
 * [0]		if str contains "0" or if something went wrong.
 *
 *
 * WARNING:
 * LONG_MAX & LONG_MIN have not yet been tested.
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
