#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	size_t	slen;
	char	*dst;

	slen = ft_strlen(src);
	if (!(src))
		return (0);
	if (len > slen)
		len = (slen);
	if ((size_t) start >= slen)
		return (ft_strdup(""));
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (!(dst))
		return (0);
	ft_memcpy(dst, &(src[start]), len);
	dst[len] = '\0';
	return (dst);
}
