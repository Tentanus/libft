#include "libft.h"

int	ft_tolower(int c)
{
	unsigned int	b;

	b = c;
	if (b >= 'A' && b <= 'Z')
	{
		b += 32;
		return (b);
	}
	return (c);
}
