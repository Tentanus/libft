#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		if (*ptr == ((unsigned char) c))
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
