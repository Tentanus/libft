#include "libft.h"

char *ft_strdup(const char *src)
{
	size_t	size;
	size_t	i;
	char	*dst;

	i = 0;
	size = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!(dst))
		return (0);
	dst = ft_memcpy(dst, src, (size));
	dst[size] = '\0';
	return (dst);
}
