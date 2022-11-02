/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_htoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:05:56 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 15:23:09 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_ishex(int c);

int	ft_htoi(const char *str)
{
	int				sign;
	unsigned long	ret;

	ret = 0;
	sign = 1;
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
