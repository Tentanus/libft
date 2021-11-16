#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	k;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	k = 0;
	if (ldst >= dstsize)
		return (lsrc + dstsize);
	while (src[k] != '\0' && (dstsize - ldst - 1) > 0)
	{
		dst[ldst + k] = src[k];
		k++;
		dstsize--;
	}
	dst[ldst + k] = '\0';
	return (ldst + lsrc);
}
