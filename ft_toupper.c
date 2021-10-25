#include "libft.h"

int	ft_toupper(int c)
{
	unsigned int	b;

	b = c;
	if (b >= 'a' && b <= 'z')
	{
		b -= 32;
		return (b);
	}
	return (c);
}
