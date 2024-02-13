/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskipis.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:19:30 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/10 15:21:49 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strskipis(const char *str, int (*is_f)(int))
{
	size_t	i;

	if (!str || !is_f)
		return (0);
	i = 0;
	while (is_f(str[i]))
		i++;
	return (i);
}
