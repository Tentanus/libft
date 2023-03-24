#include <libft.h>
#include <stdio.h>

int main(void)
{
	char	str[11] = "\"\"";
	const size_t len = ft_strlen(str);

	if (len > 2)
		return ;
	ft_printf("|%s|\n", str);
	ft_memmove(str, str + 1, len);
	ft_printf("|%s|\n", str);
	ft_memmove(&str[len - 2], &str[len - 1], 1);
	ft_printf("|%s|\n", str);
	return (0);
}
