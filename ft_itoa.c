/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 11:28:46 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/24 16:28:38 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size_n;
	long	nb;
	char	*str;

	nb = n;
	size_n = ft_inlen(nb);
	str = malloc((size_n + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size_n] = '\0';
	size_n--;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	else if (nb == 0)
		str[0] = 48;
	while (nb > 0 && size_n >= 0)
	{
		str[size_n] = 48 + (nb % 10);
		nb /= 10;
		size_n--;
	}
	return (str);
}
