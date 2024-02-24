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

/**
 *  @brief
 *  Will take in a char*, skip whitespace, take in '-' or '+',
 *  skip '0x' or '0X' and only interpret hexadecimal (ft_ishex).
 *
 *  @warning Segfaults when given NULL.
 *  @param str
 *  @return long or 0 if non INT value;
 */

int	ft_htoi(const char *str)
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
		if (*str >= '0' && *str <= '9')
			res = res * 16 + (*str - '0');
		if (*str >= 'a' && *str <= 'f')
			res = res * 16 + (10 + *str - 'a');
		if (*str >= 'A' && *str <= 'F')
			res = res * 16 + (10 + *str - 'A');
		str++;
	}
	if ((sign * res) < INT_MIN && res > INT_MAX)
		return (0);
	return ((int) sign * res);
}
