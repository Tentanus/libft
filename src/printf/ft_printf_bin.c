/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_bin.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/53 23:59:14 by mweverli      #+#    #+#                 */
/*   Updated: 2022/10/17 12:19:55 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdint.h>

static int	put_bin_16(uint16_t num)
{
	int		i;
	char	str[17];

	i = 0;
	str[16] = '\0';
	while (i < 16)
	{
		str[i] = '0' + (num >> (15 - i) & 0x1);
		if (str[i] == '1')
			num -= (0x1 << (15 - i));
		i++;
	}
	return (write(1, str, 16));
}

static int	put_bin_32(uint32_t num)
{
	int		i;
	char	str[33];

	i = 0;
	str[32] = '\0';
	while (i < 32)
	{
		str[i] = '0' + (num >> (31 - i) & 0x1);
		if (str[i] == '1')
			num -= (0x1 << (31 - i));
		i++;
	}
	return (write(1, str, 32));
}

static int	put_bin_64(uint64_t num)
{
	int		i;
	char	str[65];

	i = 0;
	str[64] = '\0';
	while (i < 64)
	{
		str[i] = '0' + (num >> (63 - i) & 0x1);
		if (str[i] == '1')
			num -= (0x1 << (63 - i));
		i++;
	}
	return (write(1, str, 64));
}

int	put_bin(va_list list)
{
	uint64_t	num;

	num = va_arg(list, uint64_t);
	if (num <= UINT16_MAX)
		return (put_bin_16(num));
	else if (num <= UINT32_MAX)
		return (put_bin_32(num));
	else
		return (put_bin_64(num));
}
