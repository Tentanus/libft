/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/24 20:39:45 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/12 16:51:31 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*dst;

	if (!s1)
		return (NULL);
	begin = 0;
	while (ft_strchr(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]) && end > begin)
		end--;
	if (begin > end)
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, &s1[begin], (end - begin + 1));
	dst[end - begin] = '\0';
	return (dst);
}
