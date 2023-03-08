/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:27:37 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/08 15:49:36 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*	ft_atoi
 *		str		string literal containing a number
 *
 * Function:
 * ft_atoi will take in a string at the start of a number and returns
 * an integer value. if anything goes wrong it returns a 0.
 *
 * RETURN VALUES:
 * [INT]	Values contained in the str including 0.
 * [0]		if str contains "0" or if something went wrong.
 */

int32_t	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	sign = 1;
	res = 0;
	while (*str == ' ')
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
