/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 01:21:08 by mweverli      #+#    #+#                 */
/*   Updated: 2022/09/04 01:24:46 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int	comp_str(const char *str, const char *ndl)
{
	int	i;

	i = 0;
	while (ndl[i])
	{
		if (str[i] != ndl[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *hay, const char *ndl)
{
	int	i;

	i = 0;
	if (!hay)
		return (NULL);
	if (!(*ndl))
		return (hay);
	while (hay[i])
	{
		if (hay[i] == ndl[0])
			if (comp_str(&hay[i], ndl))
				return (&hay[i]);
		i++;
	}
	return (NULL);
}
