/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stris.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:28:59 by mweverli      #+#    #+#                 */
/*   Updated: 2021/10/04 15:29:01 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_stris(const char *str, int (*is_f)(int))
{
	int	index;

	if (!str || !is_f)
		return (false);
	index = 0;
	while (str[index] != '\0')
	{
		if (!is_f((int) str[index]))
			return (false);
		index++;
	}
	return (true);
}
