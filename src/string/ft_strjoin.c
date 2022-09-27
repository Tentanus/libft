/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:30:21 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:30:23 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	ls1;
	size_t	ls2;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, (ls1 + 1));
	ft_strlcat(dst, s2, (ls1 + ls2 + 1));
	return (dst);
}
