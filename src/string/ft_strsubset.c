/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsubset.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 21:03:17 by mweverli      #+#    #+#                 */
/*   Updated: 2024/02/09 19:53:15 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubset(const char *str, const char *set)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(set, str[i]))
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
