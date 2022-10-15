/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_bin.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/53 23:59:14 by mweverli      #+#    #+#                 */
/*   Updated: 2022/10/53 23:59:14 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_bin_32(va_list list)
{
	int		num;
	int		i;
	char	str[32];

	num = va_arg(list, unsigned int);
	i = 31;
	str[32] = '\0';
	while (i >= 0)
	{
		str[i] = (num % 2) + '0';
		i--;
		num /= 2;
	}
	return (write(1, str, 32));
}

int	put_bin_16(va_list list)
{
	int		num;
	int		i;
	char	str[16];

	num = va_arg(list, unsigned int);
	i = 15;
	str[16] = '\0';
	while (i >= 0)
	{
		str[i] = (num % 2) + '0';
		i--;
		num /= 2;
	}
	if (i == 0 && num != 0)
	{
		return (write(1, "[USE BIN 32]", 12));
	}
	return (write(1, str, 16));
}
