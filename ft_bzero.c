#include "libft.h"
// write zeroes to a byte string

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0 && *(char *)s != '\0')
		*(char *)s++ = 0;
}
