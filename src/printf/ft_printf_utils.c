/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 18:15:37 by mweverli      #+#    #+#                 */
/*   Updated: 2022/07/09 15:41:01 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(long n)
{
	int		i_len;
	char	*str;

	i_len = base_len_dec(n);
	str = malloc((i_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i_len] = '\0';
	i_len--;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0 && i_len >= 0)
	{
		str[i_len] = '0' + (n % 10);
		n /= 10;
		i_len--;
	}
	return (str);
}

char	*ft_itoh(unsigned long n)
{
	char	*set;
	char	*str;
	int		b_len;

	set = "0123456789abcdef\0";
	b_len = base_len_hex(n);
	str = malloc((b_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[b_len--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[b_len--] = set[n % 16];
		n /= 16;
	}
	return (str);
}

int	write_till(const char **str)
{
	int	count;

	count = 0;
	while ((*str)[count] && (*str)[count] != FORMAT_CHAR)
		count++;
	write(1, *str, count);
	*str += count;
	return (count);
}

void	ft_strtoupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return ;
}
