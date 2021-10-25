#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = ((unsigned char *) s);
	while (*ptr && n > 0)
	{
		if (*ptr == ((unsigned char) c))
			return (ptr);
		ptr++;
		n--;
	}
	if (*ptr == (unsigned char) c && n != 0)
		return (ptr);
	return (0);
}
