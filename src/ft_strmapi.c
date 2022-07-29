/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 10:42:08 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/02 19:00:45 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	char	*sc;

	sc = (char *)s;
	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (sc[i] != '\0')
	{
		str[i] = f(i, sc[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
