/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin_fs1.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:30:21 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/08 16:06:03 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_fs1(char *s1, char const *s2)
{
	char	*dst;
	size_t	ls1;
	size_t	ls2;

	if (!s1)
		return (NULL);
	if (!s2)
		return (s1);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!dst)
		return (free(s1), NULL);
	ft_strlcpy(dst, s1, (ls1 + 1));
	ft_strlcat(dst, s2, (ls1 + ls2 + 1));
	free(s1);
	return (dst);
}
