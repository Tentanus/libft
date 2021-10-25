#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	d_start;
	size_t	d_end;
	char	*dst;

	d_start = 0;
	while (in_set(s1[d_start], set) && s1)
		d_start++;
	d_end = ft_strlen(s1);
	while (in_set(s1[d_end - 1], set) && d_end > d_start)
		d_end--;
	dst = (char *)malloc(sizeof(char) * (d_end - d_start + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, &s1[d_start], (d_end - d_start + 1));
	dst[d_end - d_start] = '\0';
	return (dst);
}
