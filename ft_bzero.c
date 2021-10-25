#include "libft.h" 

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;

	d = s;
	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}
}
