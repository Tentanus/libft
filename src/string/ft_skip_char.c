/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_skip_char.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:41:20 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/10 15:42:08 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_skip_char(const char *str, const char c)
{
	int	i;

	i = 0;
	while (str[i] == c)
		i++;
	return (i);
}

