/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_htoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:05:56 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 18:21:08 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*	ft_htoi
 *		str		string literal containing a hexadecimal number
 *
 * Function:
 * ft_htoi will take in a string, skip whitespace, take in a '-' or '+' and only
 * interpret a hexadecimal number. It will return the number read from the 
 * string, if it is an integer value. If the number is outside the INT range, 
 * the number returns "0".
 *
 * RETURN VALUES:
 * [INT]	Values contained in the str including 0.
 * [0]		if str contains "0" or if something went wrong.
 */

int32_t	ft_htoi(const char *str)
{
	int		sign;
	long	res;

	res = 0;
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
		if (ft_isdigit(*str))
			res = res * 16 + (*str - '0');
		else
			res = res * 16 + (10 + *str - ft_ternary(*str < 92, 'A', 'a'));
		str++;
	}
	if ((sign * res) < INT_MIN && res > INT_MAX)
		return (0);
	return ((int) sign * res);
}
