#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;

	d = b;
	while (len > 0)
	{
		*d++ = c;
		len--;
	}
	return (b);
}
