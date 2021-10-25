#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;

	b = (char *)s + ft_strlen(s);
	while (s != b)
	{
		if (*b == (unsigned char) c)
			return (b);
		b--;
	}
	if (*b == (unsigned char) c)
		return (b);
	return (0);
}
