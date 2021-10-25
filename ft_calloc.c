#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
	char *ptr;

	ptr = malloc(nitems * size);
	if (!(ptr))
		return (0);
	ft_memset(ptr, 0, nitems * size);
	return (ptr);
}
