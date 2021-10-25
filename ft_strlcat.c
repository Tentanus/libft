#include "libft.h"

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	if (i >= dstsize)
		return (j + dstsize);
	while (*src && (dstsize - i - 1) > 0)
	{
		dst[i + k] = src[k];
		k++;
		dstsize--;
	}
	dst[i + k] = '\0';
	return (i + j);
}
