/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 10:42:08 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/02 19:00:45 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;
	char	*sc;

	if (!s)
		return (NULL);
	sc = (char *)s;
	i = 0;
	ret = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (sc[i] != '\0')
	{
		ret[i] = f(i, sc[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
