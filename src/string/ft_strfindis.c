/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strfindis.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/01 15:28:59 by mweverli      #+#    #+#                 */
/*   Updated: 2024/04/01 15:29:01 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strfindis(const char *str, int (*is_f)(int))
{
	size_t	idx;

	if (!str || !is_f)
		return (0);
	idx = 0;
	while (str[idx])
	{
		if (is_f(str[idx]))
			break ;
		idx++;
	}
	return (idx);
}
