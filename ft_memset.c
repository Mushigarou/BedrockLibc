//fill a byte string with a byte value
// Seg fault when NULL

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	size_t			tmp;
	unsigned char	cast_c;

	cast_c = (unsigned char)(c);
	tmp = len;
	i = 0;
	while (len > 0)
	{
		*(unsigned char *)(b) = cast_c;
		b++;
		len--;
	}
	return (((unsigned char *)b) - tmp);
}

// int main()
// {
// 	// char	p[] = "Heey";
// 	// printf("%s\n", ft_memset(x, '5', 2));
// 	printf("%d\n", x);
// 	// printf("%s\n", memset(p, '\0', 2));
// }