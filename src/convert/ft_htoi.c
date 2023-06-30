/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_htoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:05:56 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 14:43:01 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*	ft_htoi
 *		str		string literal containing a HEX-number
 *
 * Function:
 * ft_htoi will take in a string, skip whitespace, take in a '-' or '+' and only
 * interpret a number. It will return the number read from the string, if it is
 * an integer value. If the number is outside the INT range, the number returns
 * "0"..
 *
 * RETURN VALUES:
 * [INT]	Values contained in the str including 0.
 * [0]		if str contains "0" or if something went wrong.
 */


int	ft_htoi(const char *str)
{
	int				sign;
	unsigned long	ret;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
		str += 2;
	while (ft_ishex(*str))
	{
		if (*str >= '0' && *str <= '9')
			ret = ret * 16 + (*str - '0');
		if (*str >= 'a' && *str <= 'f')
			ret = ret * 16 + (10 + *str - 'a');
		if (*str >= 'A' && *str <= 'F')
			ret = ret * 16 + (10 + *str - 'A');
		str++;
	}
	return ((int) sign * ret);
}
