/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:31:20 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:31:23 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	if ((s1[i] == '\0') || (s2[i] == '\0'))
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	while (i < n && s1[i] && s2[i])
	{
		if (((unsigned char) s1[i]) != ((unsigned char) s2[i]))
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
		i++;
	}
	if ((!s1[i] || !s2[i]) && i < n)
		return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
	return (0);
}
