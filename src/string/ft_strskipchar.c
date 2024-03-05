/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskipchar.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:41:20 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 19:08:40 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strskipchar(const char *str, const char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c)
		i++;
	return (i);
}
