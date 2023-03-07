/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:27:37 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/07 19:43:03 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*	ft_atoi
 *		str		string literal containing a number
 *
 * Function:
 * ft_atoi will take in a string at the start of a number
 * and return an integer value. if anything goes wrong it'll return 0.
 *
 * RETURN VALUES:
 * [INT]	Values contained in the str including 0.
 * [0]		if str contains "0" or if something went wrong.
 */

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	if (!str)
		return (0);
	sign = 1;
	res = 0;
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
	if (n >= INT_MIN && n <= INT_MAX && ft_strlen(str) < 11)
		return ((int)(sign * res));
	return (0);
}
