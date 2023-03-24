/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 12:03:46 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/24 09:27:41 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	if (!s)
		return (0);
	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (wc);
}

static char	*ft_make_word(char *src, char c)
{
	char	*dst;
	size_t	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	dst = ft_calloc((i + 1), sizeof(char));
	if (!dst)
		return (0);
	ft_memcpy(dst, src, i);
	return (dst);
}

static char	**ft_remove(char **arr, size_t j)
{
	while (j--)
		free(arr[j]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	j;
	size_t	wc;

	j = 0;
	wc = ft_word_count(s, c);
	arr = malloc((wc + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr[wc] = NULL;
	while (j < wc && *s != '\0')
	{
		while (*s == c)
			s++;
		arr[j] = ft_make_word(((char *) s), c);
		if (!arr[j])
			return (ft_remove(arr, j));
		j++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (arr);
}
