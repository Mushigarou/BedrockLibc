#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s += 1 ;
		i++;
	}
	return (i);
}

