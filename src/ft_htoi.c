/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_htoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:05:56 by mweverli      #+#    #+#                 */
/*   Updated: 2022/09/05 14:39:53 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_htoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned long	ret;

	i = 0;
	ret = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	if (str[i] == '0' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
		i += 2;
	while (ft_ishex(str[i]))
	{
		if (str[i] >= '0' && str[i] <= '9')
			ret = ret * 16 + (str[i] - '0');
		if (str[i] >= 'a' && str[i] <= 'f')
			ret = ret * 16 + (10 + str[i] - 'a');
		if (str[i] >= 'A' && str[i] <= 'F')
			ret = ret * 16 + (10 + str[i] - 'A');
		i++;
	}
	return ((int) sign * ret);
}
