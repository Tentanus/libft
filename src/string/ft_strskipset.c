/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskipset.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 19:53:02 by mweverli      #+#    #+#                 */
/*   Updated: 2024/02/09 19:53:04 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strskipset(const char *str, const char *set)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(set, (int) str[i]))
			break ;
		i++;
	}
	if (!str[i])
		return (NULL);
	return ((char *) &str[i]);
}
