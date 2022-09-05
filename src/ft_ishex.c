/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ishex.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:12:46 by mweverli      #+#    #+#                 */
/*   Updated: 2022/09/05 14:39:55 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD:src/ft_ishex.c
int	ft_ishex(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'))
		return (1);
	return (0);
=======
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
>>>>>>> 316484454efef31e549970b3f1bf4857fe497f61:src/ft_strstr.c
}
