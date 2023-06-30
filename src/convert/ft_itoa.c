/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 11:28:46 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 18:44:54 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_itoa
 *		n		an integer
 *
 * Function:
 * ft_itoa will take an integer and convert it into a string containing the
 * numbers of n.
 *
 * RETURN VALUES:
 * [CHAR *]		a null-terminated string containing n.
 * [NULL]		if anything goes wrong during allocation.
 */

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
		return (NULL);
	str[size_n--] = '\0';
	if (nb == 0)
		str[0] = '0';
	else if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0 && size_n >= 0)
	{
		str[size_n] = '0' + (nb % 10);
		nb /= 10;
		size_n--;
	}
	return (str);
}
