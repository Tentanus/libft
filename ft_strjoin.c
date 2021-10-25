#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, (ls1 + 1));
	ft_strlcat(dst, s2, (ls1 + ls2 + 1));
	return (dst);
}
