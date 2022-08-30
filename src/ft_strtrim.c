/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 20:39:45 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/12 16:51:31 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	while (ft_strchr(set, s1[i]) && *s1 != '\0')
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	if (i > j)
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, &s1[i], (j - i + 1));
	dst[j - i] = '\0';
	return (dst);
}
