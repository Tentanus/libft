#include "libft.h"

int	ft_tolower(int c)
{
	unsigned int	b;

	b = c;
	if (b >= 'A' && b <= 'Z')
		return (b + 32);
	return (c);
}
